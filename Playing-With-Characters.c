#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
    
    int MAX_LEN=256;
    char s[MAX_LEN];
    char sen[MAX_LEN];

    //charachter
    
    scanf("%c ",&ch);
    scanf("%s ",s);
    fgets(sen, MAX_LEN, stdin);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
