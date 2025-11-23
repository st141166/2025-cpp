#include <stdio.h>
#include <string.h>

int main() 
{
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    
    int max = 0;
    char res[1000] = "";
    
    char* word = strtok(s, " ");  
    
    while (word != NULL) 
    {
        int len = strlen(word);
        if (len > max) 
        {
            max = len;
            strcpy(res, word);
        }
        word = strtok(NULL, " ");
    }   
    printf("%s\n%d", res, max);
    return 0;
}