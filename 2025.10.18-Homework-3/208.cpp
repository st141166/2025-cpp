#include <cstdio>

int main (int argc, char** argv)
{
    int n = 0;
    int a_prev = 0;
    int a_curr = 1;
    int draft = 0;
    int k = 2;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0");
    }
    else if (n == 1)
    {
        printf("1");
    }
    else
    {
        while (k <= n)
        {   
            draft = a_curr;
            a_curr = a_curr + a_prev;
            a_prev = draft;
            k++;
        }
        printf("%d", a_curr);
    }
    return 0;
}