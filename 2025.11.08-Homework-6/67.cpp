#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int n = 0;
    int k = 0;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        return 1;
    }
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; ++i)
    {
        if (((arr[i] > 0) && (arr[i-1] > 0)) || ((arr[i] < 0) && (arr[i-1] < 0)))
        {
            k = 1;
        }
    }
    if (k == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    free(arr);
    return 0;
}