#include <stdio.h>
#include <math.h>

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
    
    double max_dist = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double dx = p[i].x - p[j].x;
            double dy = p[i].y - p[j].y;
            double dist = sqrt(dx * dx + dy * dy);
            if (dist > max_dist)
            {
                max_dist = dist;
            }
        }
    }
    
    printf("%.15lf\n", max_dist);
    
    return 0;
}