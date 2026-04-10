// HW4-TemplatedStack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

void testStack();

// TODO: Add #includes as needed

int main()
{
	testStack();

	if (_CrtDumpMemoryLeaks())
		std::cout << "\nMemory leaks?!" << std::endl;
	else
		std::cout << "\nNo leaks :)" << std::endl;
}

void testStack()
{
	// TODO: put your test code here
}