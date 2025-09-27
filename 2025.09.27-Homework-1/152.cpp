#include <cstdio>

int main (int argc, char** argv)
{
    int n = 0;
    int next = 0;
    int prev = 0;
    scanf("%d", &n);
    next = n + 1;
    prev = n - 1;
    printf("The next number for the number %d is %d.\n", n, next);
    printf("The previous number for the number %d is %d.", n, prev);
    return 0;
}