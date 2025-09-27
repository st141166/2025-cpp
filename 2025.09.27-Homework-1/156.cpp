#include <cstdio>

int main(int arsc, char** arsv)
{
    int n1 = 0;
    int n2 = 0;
    int ans = 0;
    scanf("%d", &n1);
    scanf("%d", &n2);
    ans = ((n1 % n2) && (n2 % n1)) + 1;
    printf("%d", ans);
    return 0;
}