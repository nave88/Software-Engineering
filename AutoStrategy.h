#ifndef AUTOSTRATEGY
#define AUTOSTRATEGY

#include "headers.h"

namespace SE
{	
	class AutoStrategy
	{
		private:
		typedef void (*funcptr)(Date d);
		funcptr trade;
		void *handle;
		string fileName;
		Portfolio *portfolio;
		
		public:
		
		AutoStrategy(string strategyFileName);
		void run(Date begin, Date end);
		
		Portfolio getPortfolio()
		{
			return *portfolio;
		}
		
		
		~AutoStrategy(); 
	};
}

#endif
