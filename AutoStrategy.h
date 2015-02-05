#ifndef AUTOSTRATEGY
#define AUTOSTRATEGY

#include "Date.h"
#include "Portfolio.h"

using namespace std;

namespace SE
{	
	class AutoStrategy
	{
		AutoStrategy(Date begin, Date end, string strategyFileName);
		
		Portfolio &run(); 
	};
}

#endif
