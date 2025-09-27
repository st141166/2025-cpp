#include <cstdio>

int main (int argc, char** argv)
{
    int n = 0;
    int a = 0;
    int b = 0;
    int amount = 0;
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);
    amount = n * a * b * 2;
    printf("%d", amount);
    return 0;
}