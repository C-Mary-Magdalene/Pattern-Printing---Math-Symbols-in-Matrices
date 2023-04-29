// Minus Symbol (star)
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
            if(i==n/2)
             printf("*");
            else
             printf(" ");
        }
        printf("\n");
    }

    return 0;
}