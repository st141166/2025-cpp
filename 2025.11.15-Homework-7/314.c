#include <stdio.h>

void hanoi(int n, int start, int end);

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    hanoi(n, 1, 2);
    return 0;
}

void hanoi(int n, int start, int end)
{
    if (n == 1)
    {
        printf("Disk 1 move from %d to %d\n", start, end);
        return ;
    }
    int mid = 6 - start - end;
    hanoi(n - 1, start, mid);
    printf("Disk %d move from %d to %d\n", n, start, end);
    hanoi(n - 1, mid, end);
}