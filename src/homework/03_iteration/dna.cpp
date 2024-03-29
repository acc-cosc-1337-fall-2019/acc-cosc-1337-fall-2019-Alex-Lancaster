#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string &dna)
{
	double gc_count = 0;
	double gc_quotient = 0;

	for (char ch : dna)
	{

		if (ch == 'C'|| ch == 'G')
		{
			++gc_count;
		}
		
	}

	gc_quotient = gc_count / dna.size();

	return gc_quotient;
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
	reverse(dna.begin(), dna.end());
	return dna;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
	string flip_dna = get_reverse_string(dna);
	for (char& ch : flip_dna)
	{
		if (ch == 'A')
		{
			ch = 'T';
		}
		else if (ch == 'T')
		{
			ch = 'A';
		}
		else if (ch == 'C')
		{
			ch = 'G';
		}
		else if (ch == 'G')
		{
			ch = 'C';
		}
	}
	return flip_dna;
}