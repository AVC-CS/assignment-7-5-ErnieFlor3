// Find the sub string in the original string

#include <iostream>
#include <cstring>
using namespace std;

int finduserstring(char[], int, char[], int);

int finduserstring(char cstr[], int cstrlen, char userstr[], int userlen)
{
	/*
	Make your code
	*/

	int i;
	for(i=0; i< cstrlen - userlen +1; i++) 
	{
		int j;
		for(j=0; j<userlen; j++) {
			if(cstr[i+j] != userstr[j])
			break;
		}
		if(j == userlen)
			return i;
	}
	return -1;
}