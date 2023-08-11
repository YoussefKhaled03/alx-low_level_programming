#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n ;
    
    n = rand() - RAND_MAX / 2;
    if (n == 0 ) 
        printf("is zero");
    else if ( n < 0 ) 
        printf("is negative");
    else 
        printf("is positive");

	return (0);
}