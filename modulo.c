// Modulo (slash and dot)
#include <stdio.h>

int main() {
    // Odd Number Matrix (from 3 to ...)
    int n;
    printf("Enter an odd number greater than or equal to 3:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==n-1-i)
             printf("/");
            else if(i==0 && j==0 || i==n-1 && j==n-1)
             printf(".");
            else
             printf(" ");
        }
        printf("\n");
    }

    return 0;