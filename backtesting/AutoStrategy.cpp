#include <string>
#include "headers.h"
#include "apifuncprogram.h"

#include <cstdlib>
#include <cstdio>
#include <unistd.h>
#include <dlfcn.h>


using namespace std;
using namespace SE;

namespace SE
{
	AutoStrategy::AutoStrategy(string strategyFileName)
	{	
		fileName = strategyFileName;
		//compile the client api and plugin
		string command = string("g++ -I.. -c -fpic apiclient.cpp ") + fileName + ".cpp";
		system(command.c_str());
		
		//create the shared library
		command = string("g++ -shared -o libplugin.so apiclient.o ") + fileName + ".o";
		system(command.c_str());
		
		string libPath = string("") + get_current_dir_name() + "/libplugin.so";

		handle = dlopen(libPath.c_str(), RTLD_NOW); //handle to shared library
		
		trade = (funcptr)dlsym(handle, "plugin"); //plugin function
		
		
		portfolio = new Portfolio;
		void (*init)(Portfolio *) = (void (*)(Portfolio *))dlsym(handle, "init");
		init(portfolio);
	 }
	 
	 void AutoStrategy::run(Date begin, Date end)
	 { 
		 for(Date today=begin; today<=end; ++today) trade(today);
	 }
	 
	 AutoStrategy::~AutoStrategy()
	 {
		dlclose(handle);
		
		string command = string("rm ") + fileName + ".o apiclient.o libplugin.so";
		system(command.c_str());
		
		delete portfolio;
	}
}
