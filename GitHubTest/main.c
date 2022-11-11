//
//  main.c
//  GitHubTest
//
//	 The exsample used derives from Project Euler problem 3 which amounts to determining
//  the largest prime factor of the number 600851475143.
//
//  Created by Hans Dockhorn on 11/11/2022.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
	// Declaration of variables used
	unsigned long N = 600851475143;
	unsigned long p = 3;
	
	// Do the math
	while ( p*p <= N )
	{
		while ( N%p == 0 ) N /= p;
		p += 2;
	}

	// Display result
	printf( "The largest prime factor of 600851475143 is %ld.\n", N );

	// Wrap-up
	return 0;
}
