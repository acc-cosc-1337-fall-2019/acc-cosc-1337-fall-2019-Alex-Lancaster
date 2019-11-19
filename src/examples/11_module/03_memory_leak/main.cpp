#include "memory_leak.h"

int main() 
{
	memory_leak();
	//more code

	while (true)
	{
		memory_leak();
	}


	//etc more code
	return 0;
}