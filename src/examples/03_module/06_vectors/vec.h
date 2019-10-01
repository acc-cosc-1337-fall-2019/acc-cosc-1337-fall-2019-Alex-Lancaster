#include<string>
#include<vector>

/*
Write function prototype for function loop_vector_w_index with no parameters.

*/

void loop_vector_w_index(); //no paramater within the "()" - will create within the function

/*
Write function prototype for function loop_vector_w_index with a vector of int pass by value parameter.

*/

void loop_vector_w_index(std::vector<int> nums); // parameter added - vector<int>

/*
Write function prototype for function loop_vector_w_index_ref with a vector of int pass by reference parameter.
*/

void loop_vector_w_index_ref(std::vector<int> & nums); //note "&" added here for reference call

/*
Write function prototype for function loop_vector_w_index with a vector of int const pass by reference parameter.
*/

void loop_vector_w_index_const(const std::vector<int> & nums);

/*
Iterate vector with a for ranged loop (use auto to make it simple)
*/

void loop_vector_w_for_ranged(std::vector<int> & nums);

void loop_vector_w_for_ranged_ref_var(std::vector<int> & nums);

std::vector<int> ret_vec_int();