// FizzBuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 100; i++)
		if (i % 15 == 0) cout << "fizzbuzz\t";
		else if (i % 3 == 0) cout << "fizz\t";
		else if (i % 5 == 0) cout << "buzz\t";
		else cout << i << "\t";

    return 0;
}

