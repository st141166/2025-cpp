#include <stdio.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} Point;

double dist(Point a, Point b)
{
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    Point p[101];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &p[i].x, &p[i].y);
    }
    
    double max_perimeter = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                double a = dist(p[i], p[j]);
                double b = dist(p[j], p[k]);
                double c = dist(p[k], p[i]);
                
                double perimeter = a + b + c;
                if (perimeter > max_perimeter)
                {
                    max_perimeter = perimeter;
                }
            }
        }
    }
    
    printf("%.15lf\n", max_perimeter);
    
    return 0;
}