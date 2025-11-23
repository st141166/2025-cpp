#include <stdio.h>

unsigned char ToUpper(unsigned char c);

int main(int argc, char** argv)
{
    unsigned char c;  
    scanf("%c", &c); 

    printf("%c", ToUpper(c));  
    return 0;
}

unsigned char ToUpper(unsigned char c)
{
    if ((c >= 'a') && (c <= 'z'))  
    {
        return c - ('a' - 'A');
    }
    else
    {
        return c;
    }
}