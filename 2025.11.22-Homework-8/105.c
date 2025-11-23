#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool Compare(char* s1, char* s2);

int main(int argc, char** argv)
{
    char s1[100];
    char s2[100];
    scanf("%99s", s1);
    scanf("%99s", s2);

    if (Compare(s1, s2))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}

bool Compare(char* s1, char* s2)
{
    return strcmp(s1, s2) == 0;
}
