#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

int main()
{
    int n;
    scanf("%d", &n);
    
    Point p[100];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &p[i].x, &p[i].y);
    }
    
    double sum_x = 0;
    double sum_y = 0;
    
    for (int i = 0; i < n; i++)
    {
        sum_x += p[i].x;
        sum_y += p[i].y;
    }
    
    double center_x = sum_x / n;
    double center_y = sum_y / n;
    
    printf("%.15lf %.15lf\n", center_x, center_y);
    
    return 0;
}