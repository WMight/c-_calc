#include <iostream>
#include "calcwin.h"
#include <cstdio>
using namespace std;
using namespace calc;

int main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew(calcwin));
	return 0;
}