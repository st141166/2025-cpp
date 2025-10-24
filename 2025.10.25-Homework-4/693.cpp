#define _CRT_SECURE_NO_WARNING
#include <cstdio>

#define SIZE 1000

int main(int argc, char** argv)
{
    int n = 0;
    int arr[SIZE] = { 0 };
    int l = 0;
    int r = 0;
    int mx = -1001;
    int ind = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &l);
    scanf("%d", &r);
    for (int i = l - 1; i < r; ++i)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
            ind = i;
        }
    }
    printf("%d %d", mx, ind + 1);
    return 0;
}