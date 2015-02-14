#include "headers.h"
#include <iostream>
using namespace std;
using namespace SE;

int main()
{
	AutoStrategy a("./plugin");
	a.run(Date(0), Date(10));
}
