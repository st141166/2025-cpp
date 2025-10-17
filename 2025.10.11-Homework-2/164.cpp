#include <cstdio>

int main (int argc, char** argv) 
{
    int n = 0;
    int a1 = 0; //первая цифра
    int a2 = 0; //вторая цифра
    int a3 = 0; //третья цифра
    int a4 = 0; //четвертая цифра
    int a5 = 0; //пятая цифра
    int a6 = 0; //шестая цифра
    int sm1 = 0; //сумма первых трех цифр
    int sm2 = 0; //сумма последних трех цифр
    
    scanf("%d", &n);
    
    a1 = n / 100000; 
    a2 = n / 10000 % 10;
    a3 = n / 1000 % 10;
    a4 = n / 100 % 10;
    a5 = n % 100 / 10;
    a6 = n % 10;
    
    sm1 = a1 + a2 + a3;
    sm2 = a4 + a5 + a6;
    
    if (sm1 == sm2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}