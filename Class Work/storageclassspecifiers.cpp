#include<stdio.h>
/*
//Extern
//Declaration declares the name and a type of an object
//Definition cause storage to be alocated
//Extern allows you to declare a variable without defining it
int main()
{
	extern int first, last; 
	printf("%d %d", first, last);
	return 0;
}


	int first=10, last= 20;

*/
Unlike Global variables, static variables are not known outside their function or file, but they maintain their value between calls.
in a static local variable value is assigned only once, and variable retains its value during function call
same statement in global static variable but now in file level


