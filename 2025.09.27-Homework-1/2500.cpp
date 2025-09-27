#include <cstdio>

int main(int arsc, char** arsv)
{
    int k = 0;
    int n = 0;
    int page = 0;
    int line = 0;
    scanf("%d", &k);
    scanf("%d", &n);
    page = (n + k - 1) / k;
    line = (n - 1) % k + 1;
    printf("%d ", page);
    printf("%d", line);
    return 0;
}