#include <stdio.h>
#include <string.h>

int main() 
{
    char s[1000];
    scanf("%s", s);
    
    int cnt[256] = {0};
    
    for (int i = 0; s[i] != '\0'; i++) 
    {
        cnt[(int)s[i]]++;
    }
    
    for (int i = 0; i < 256; i++) 
    {
        if (cnt[i] == 2) {
            printf("%c", (char)i);
            break;
        }
    }
    return 0;
}