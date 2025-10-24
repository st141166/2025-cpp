#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>

#define SIZE 1000

int main (int argc, char** argv)
{
    int n = 0;
    int arr[SIZE] = { 0 };
    int x = 0;
    int dif = 2001;
    int ans = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; ++i)
    {
        if (abs(x - arr[i]) < dif) 
        {
            dif = abs(x - arr[i]);
            ans = arr[i];
        }
        else if (abs(x - arr[i]) == dif)
        {
            ans = ans < arr[i] ? ans : arr[i];
        }
    }
    printf("%d", ans);
    return 0;
}