#include <stdio.h>
#include <string.h>

int main() 
{
    char s[1000];
    scanf("%s", s);
    
    int len = strlen(s);
    int palindrome = 1;
    
    for (int i = 0; i < len / 2; i++) 
    {
        if (s[i] != s[len - 1 - i]) 
        {
            palindrome = 0;
            break;
        }
    }
    
    if (palindrome) 
    {
        printf("yes");
    } 
    else 
    {
        printf("no");
    }
    return 0;
}