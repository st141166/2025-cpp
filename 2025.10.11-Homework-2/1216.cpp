#include <cstdio>

int main (int argc, char** argv)
{
    //размеры первой коробки
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    //размеры второй коробки
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;

    int mx1 = 0; //максимальная сторона первой коробки
    int av1 = 0; //"средняя" сторона первой коробки
    int mn1 = 0; //минимальная сторона первой коробки

    int mx2 = 0; //максимальная сторона первой коробки
    int av2 = 0; //"средняя" сторона первой коробки
    int mn2 = 0; //минимальная сторона первой коробки

    scanf("%d", &a1);
    scanf("%d", &b1);
    scanf("%d", &c1);
    scanf("%d", &a2);
    scanf("%d", &b2);
    scanf("%d", &c2);
    
    //поиск максимума, средней и минимальной сторон в первой коробке
    
    if ((a1 >= b1) && (a1 >= c1))
    {
        mx1 = a1;
        if ((b1 >= c1))
        {
            av1 = b1;
            mn1 = c1;
        }
        else
        {
            av1 = c1;
            mn1 = b1;
        }
    }
    if ((b1 >= a1) && (b1 >= c1))
    {
        mx1 = b1;
        if ((a1 >= c1))
        {
            av1 = a1;
            mn1 = c1;
        }
        else
        {
            av1 = c1;
            mn1 = a1;
        }
    }
    if ((c1 >= a1) && (c1 >= b1))
    {
        mx1 = c1;
        if ((b1 >= a1))
        {
            av1 = b1;
            mn1 = a1;
        }
        else
        {
            av1 = a1;
            mn1 = b1;
        }
    }

    //поиск максимума, средней и минимальной сторон во второй коробке
    
     if ((a2 >= b2) && (a2 >= c2))
    {
        mx2 = a2;
        if ((b2 >= c2))
        {
            av2 = b2;
            mn2 = c2;
        }
        else
        {
            av2 = c2;
            mn2 = b2;
        }
    }
    if ((b2 >= a2) && (b2 >= c2))
    {
        mx2 = b2;
        if ((a2 >= c2))
        {
            av2 = a2;
            mn2 = c2;
        }
        else
        {
            av2 = c2;
            mn2 = a2;
        }
    }
    if ((c2 >= a2) && (c2 >= b2))
    {
        mx2 = c2;
        if ((b2 >= a2))
        {
            av2 = b2;
            mn2 = a2;
        }
        else
        {
            av2 = a2;
            mn2 = b2;
        }
    }
    
    //проверка вопроса задачи - какая из коробок больше/меньше и тп

    if ((mx1 == mx2) && (av1 == av2) && (mn1 == mn2))
    {
        printf("Boxes are equal");
    }
    else 
    {
        if ((mx1 >= mx2) && (av1 >= av2) && (mn1 >= mn2))
        {
            printf("The first box is larger than the second one");
        }
        else{
            if (((mx2 >= mx1) && (av2 >= av1) && (mn2 >= mn1)))
            {
                printf("The first box is smaller than the second one");
            }
            else
            {
                printf("Boxes are incomparable");
            }
        }
    }
    return 0;
}