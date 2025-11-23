#include <stdio.h>
#include <string.h>

int main() 
{
    char str[1000];
    
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    int cnt = 0;
    char* word = strtok(str, " ");  
    
    while (word != NULL) 
    {
        cnt++;
        word = strtok(NULL, " ");
    }
    printf("%d", cnt);
    return 0;
}