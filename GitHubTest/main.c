//
//  main.c
//  GitHubTest
//
//	 The example derives from Project Euler problem 3 which amounts to determining
//  the largest prime factor of the number 600851475143.
//
//  Created by Hans Dockhorn on 11/11/2022.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[])
{
	// Declaration of variables used
	unsigned long N = 600851475143;					// The number top be factored
	unsigned long p = 3;									// Prime factor to be tested
	
	// Register starting time
	clock_t startTime = clock();
	
	// Do the math
	while ( p*p <= N )
	{
		if ( N%p == 0 ) N /= p; else p += 2;
	}

	// Register ending time
	clock_t endTime = clock();
	
	// Display result
	printf( "The largest prime factor of 600851475143 is %ld.\n", N );

	// Display computation time in clock ticks
	printf( "The computation took %ld clock ticks.\n", endTime-startTime );
	
	// Wrap up
	return 0;
}
