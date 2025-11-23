#include <stdio.h>

unsigned char Case(unsigned char c);

int main(int argc, char** argv)
{
    unsigned char c;  
    scanf("%c", &c); 

    printf("%c", Case(c));  
    return 0;
}

unsigned char Case(unsigned char c)
{
    if ((c >= 'a') && (c <= 'z'))  
    {
        return c - ('a' - 'A');
    }
    else if ((c >= 'A') && (c <= 'Z'))
    {
        return c + ('a' - 'A');
    }
    else
    {
        return c;
    }
}