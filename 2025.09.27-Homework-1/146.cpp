#include <cstdio>

int main (int argc, char** argv)
{
    int Harry_win = 0;
    int Larry_win = 0;
    int Harry_loss = 0;
    int Larry_loss = 0;
    int all = 0;
    scanf("%d", &Harry_win);
    scanf("%d", &Larry_win);
    all = Harry_win + Larry_win - 1;
    Harry_loss = all - Harry_win;
    Larry_loss = all - Larry_win;
    printf("%d ", Harry_loss);
    printf("%d", Larry_loss);
    return 0;
}