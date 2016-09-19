#include <iostream>
#include <cstdio>

using namespace std;
/*
	Function: factorial
	Gives the factorial of the number.
	
	Parameters:
	num - an postive integer.
	
	Returns:
	The factorial of the number.
	
*/


int factorial(int num)
{
	int ans=1;
	for(int i=1; i<=num; i++)
		ans = ans * num;

	return ans;
}


int main()
{
	int var = 5;/*declaring variable*/
	int fact5 = factorial(var);/*calling factorial*/
	cout<<"Factorial of "<<var<<": "<<fact5<<"\n";/*printing factorial*/

	return 0;
}

//perl NaturalDocs -i project_func/src -o HTML project_func/doc -p project_func/config

