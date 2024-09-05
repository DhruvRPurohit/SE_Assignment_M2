/*4. WAP to find factorial using recursion */

#include <stdio.h>

int factorial(int n) 
{
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial of %d is %d\n", number, factorial(number));

    return 0;
}

