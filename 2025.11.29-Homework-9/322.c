#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
    int n;
    scanf("%d", &n);
    
    Point p[100];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p[i].x, &p[i].y);
    }
    
    long long max = -1;
    Point result;
    
    for (int i = 0; i < n; i++) {
        long long dist = (long long)p[i].x * p[i].x + (long long)p[i].y * p[i].y;
        if (dist > max) {
            max = dist;
            result = p[i];
        }
    }
    
    printf("%d %d\n", result.x, result.y);
    
    return 0;
}