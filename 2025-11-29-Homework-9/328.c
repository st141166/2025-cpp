#include <stdio.h>

typedef struct
{
    char first_name[20];
    char last_name[20];
    int math;
    int physics;
    int informatics;
} Student;

int main()
{
    int n;
    scanf("%d", &n);
    
    Student s[100];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d %d %d", s[i].last_name, s[i].first_name, &s[i].math, &s[i].physics, &s[i].informatics);
    }
    
    double sum_math = 0;
    double sum_physics = 0;
    double sum_informatics = 0;
    
    for (int i = 0; i < n; i++)
    {
        sum_math += s[i].math;
        sum_physics += s[i].physics;
        sum_informatics += s[i].informatics;
    }
    
    double avg_math = sum_math / n;
    double avg_physics = sum_physics / n;
    double avg_informatics = sum_informatics / n;
    
    printf("%g %g %g\n", avg_math, avg_physics, avg_informatics);
    
    return 0;
}