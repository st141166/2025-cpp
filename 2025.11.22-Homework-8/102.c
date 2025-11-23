#include <stdio.h>
#include <stdbool.h>

bool IsDigit(char x);

int main(int argc, char** argv)
{
    unsigned char symb;
    scanf("%c", &symb);

    if (IsDigit(symb))  
    {
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}

bool IsDigit(char x)
{
    return ((x >= '0') && (x <= '9'));
}