#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    scanf("%c", &ch);
    printf("%c", ch);
    printf("\n");
    scanf("\n");

    char s[100];
    scanf("%s", &s);
    printf("%s", s);
    printf("\n");
    scanf("\n");

    char sen[100];
    scanf("%[^\n]%*c", sen);
    printf(sen);

    return 0;
}
