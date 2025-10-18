#include <cstdio>

int main (int argc, char** argv)
{
    int x = 0;
    scanf("%d", &x);
    int mx1 = -101;
    int mx2 = -101;
    do 
    {
        if (x > mx1)
        {
            mx2 = mx1;
            mx1 = x;
        }
        else if (x > mx2)
        {
            mx2 = x;
        }
        scanf("%d", &x);
    } while (x != 0);
    printf("%d", mx2);

    return 0;
}