#include <cstdio>

int main(int arsc, char** arsv)
{
    int v = 0;
    int t = 0;
    int s = 0;
    int ans = 0;
    scanf("%d", &v);
    scanf("%d", &t);
    s = v * t;
    ans = ((s % 109) + 109) % 109 + 1;
    printf("%d", ans);
    return 0;
}