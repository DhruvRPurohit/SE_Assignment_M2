/* 33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3) */

#include <stdio.h>
main()
{
    int n;
    printf("Enter any value : ");
    scanf("%d",&n);
    
    int p1 = n;
    int p2 = n * n;
    int p3 = n * n * n;
    
    printf("\nN^1 = %d\n", p1);
    printf("\nN^2 = %d\n", p2);
    printf("\nN^3 = %d\n", p3);
    
}

