#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    int n1;
    int n2;
    int sum;
    int diff;
    float f1;
    float f2;
    float sum1;
    float diff1;

    scanf("%d %d", &n1, &n2); 
    scanf("\n");
    scanf("%f %f", &f1, &f2);

    sum = n1 + n2;
    diff = n1 - n2;

    sum1 = f1 + f2;
    diff1 = f1 - f2;

    printf("%d", sum);
    printf(" ");
    printf("%d", diff);
    printf("\n");
    printf("%.1f", sum1);
    printf(" ");
    printf("%.1f", diff1);

    return 0;
}
