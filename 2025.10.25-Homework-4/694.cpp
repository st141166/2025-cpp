#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

#define SIZE 1000

int main(int argc, char** argv)
{
    int n = 0;
    int arr[SIZE] = { 0 };
    int mn = 1001;
    int mx = -1001;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == mx)
        {
            arr[i] = mn;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (i < n - 1)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }
    return 0;
}