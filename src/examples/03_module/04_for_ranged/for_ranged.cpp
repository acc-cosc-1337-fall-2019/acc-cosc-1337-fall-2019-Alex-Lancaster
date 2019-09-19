#include "for_ranged.h"
#include<iostream>
#include<vector>

using std::vector;

/*
Write code for loop_string_w_index that accepts a string parameter.
The function uses an indexed for loop to iterate and display the characters in the
string as follows:
for string test displays

t
e
s
t
*/


/*
Write code for loop_string_w_index that accepts a string parameter.
The function uses a for ranged loop using auto to iterate and display the characters in the
string as follows:
for string test displays

t
e
s
t
*/


void loop_vector_w_index() 
{
	vector<int> nums = {9, 10, 99, 5,67 };

	for (int i = 0; i < nums.size(); ++i) 
	{
		std::cout << nums[i] << "\n";
	}
}

void loop_string_w_auto(std::string str)
{
	//not modifiable
	for (auto ch : str)
	{
		ch = 'j';
		std::cout << ch << "\n";
	}

	// modifiable -- this is an exaple on how to modify a for ranged loop
	for (auto &ch : str) //look at the "&" placed here!
	{
		ch = 'j';
		std::cout << ch << "\n";
	}
}
