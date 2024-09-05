/* 16. Calculate the Sum of Natural Numbers Using the While Loop */

#include <stdio.h>

int main() 
{
    int n, i = 1, sum = 0;

    printf("\n\n\tEnter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) 
	{
        sum += i; // Add the current value of i to the sum
        i++;      // Increment i
    }

    printf("\n\n\tThe sum of the first %d natural numbers is: %d\n", n, sum);

}

