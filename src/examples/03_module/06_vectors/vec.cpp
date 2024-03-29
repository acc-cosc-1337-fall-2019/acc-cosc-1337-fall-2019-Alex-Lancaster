#include "for_ranged.h"
#include<iostream>
#include "vec.h"


using std::vector;

/*
Write code for function loop_vector_w_index with no parameters.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows: 9 10 99 5  67
*/
void loop_vector_w_index()
{
	vector<int> nums = {3, 5, 99, 8};

	for (int i = 0; i < nums.size();  ++i)
	{
		std::cout << nums[i] << "\n";
	}
}


/*
Write code for function loop_vector_w_index with a vector of int pass by value parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows: 9 10 99 5  67
*/

void loop_vector_w_index(std::vector<int> nums)
{
	nums[0] = 1000;
	for (int i = 0; i < nums.size(); ++i)
	{
		std::cout << nums[i] << "\n";
	}
}

/*
Write code for function loop_vector_w_index with a vector of int pass by reference parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows : 9 10 99 5  67
*/

void loop_vector_w_index_ref(std::vector<int> & nums)
{
	nums[0] = 1000;
	for (int i = 0; i < nums.size(); ++i)
	{
		std::cout << nums[i] << "\n";
	}
}

/*
Write code for function loop_vector_w_index with a vector of int const pass by reference parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows : 9 10 99 5  67
*/

void loop_vector_w_index_const(const std::vector<int> & nums)
{
	for (int i = 0; i < nums.size(); ++i)
	{
		std::cout << nums[i] << "\n";
	}
}

/*
Passing constant reference w/ for ranged loop
*/

void loop_vector_w_for_ranged(std::vector<int> & nums)
{
	for (auto num : nums) // "for num in nums", puts current value in num, into cout
	{
		num = 1000;
		std::cout << num << "\n";
	}
}

void loop_vector_w_for_ranged_ref_var(std::vector<int> & nums)
{
	for (auto & num : nums) // "for num in nums", puts current value in num, into cout
	{
		num = 1000;
		std::cout << num << "\n";
	}
}

std::vector<int> ret_vec_int()
{
	std::vector<int> my_vector(9, 2);
	// could add more values to vector w/ pushback
	my_vector.push_back(3);
	return my_vector;
}