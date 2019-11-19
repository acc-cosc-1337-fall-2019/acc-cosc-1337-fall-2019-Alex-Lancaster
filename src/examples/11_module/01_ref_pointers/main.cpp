#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num1 = 10;
	int num2 = 20;

	int& num_ref = num1;
	int* num_ptr = &num2;

	cout << "num1: \n" << num1 << "num2: \n" << num2;

	ref(num_ref, num_ptr);

	cout << "num1: \n" << num1 << "num2: \n" << num2;

	return 0;
}