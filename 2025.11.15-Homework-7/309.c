#include <stdio.h>
#include <stdbool.h>

bool Election(bool x, bool y, bool z);

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("%d", Election(a, b, c));
    return 0;
}

bool Election(bool x, bool y, bool z)
{
    return x + y + z >= 2;
}