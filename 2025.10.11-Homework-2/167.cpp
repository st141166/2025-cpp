#include <cstdio>

int main (int argc, char** argv)
{
    int N = 0; //кол-во гостей
    int cuts = 0; //количество разрезов
    scanf("%d", &N);
    if (N % 2 == 0)
    {
        cuts = N / 2;
    }

    else 
    {
        if (N == 1)
        {
            cuts = 0;
        }
        else
        {
            cuts = N;
        }
    }

    printf("%d", cuts);
    return 0;
}