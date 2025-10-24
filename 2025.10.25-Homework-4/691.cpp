#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

#define SIZE 1000

int main (int argc, char** argv)
{
    int n = 0;
    int arr[SIZE] = { 0 };
    int x = 0;
    int cnt = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == x)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}