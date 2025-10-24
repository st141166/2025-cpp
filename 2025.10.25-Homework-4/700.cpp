#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

#define SIZE 1000

int main (int argc, char** argv)
{
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int dr = 0;
    int arr[SIZE] = { 0 };

    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    for (int i = 0; i < n; ++i)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i <= (b - a) / 2; ++i)
    {
        dr = arr[a + i - 1];
        arr[a + i - 1] = arr[b - i - 1];
        arr[b - i - 1] = dr;
    }

    for (int i = 0; i <= (d - c) / 2; ++i)
    {
        dr = arr[c + i - 1];
        arr[c + i - 1] = arr[d - i - 1];
        arr[d - i - 1] = dr;
    }
    
    for (int i = 0; i < n; ++i)
    {
        printf("%d", arr[i]);
        if (i != n - 1)
        {
            printf(" ");
        }
    }
    return 0;
}