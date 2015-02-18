#include "headers.h"
#include <iostream>
using namespace std;

int main()
{
	AutoStrategy a("./plugin");
	a.run(Date(0), Date(10));
	Portfolio p = a.getPortfolio();
}
