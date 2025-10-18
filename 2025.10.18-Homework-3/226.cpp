#include <cstdio>

int main (int argc, char** argv)
{
    int prev = 0;
    int curr = 0;
    int cnt = 0;
    int mx = 0;
    scanf("%d", &prev);

    do
    {
        scanf("%d", &curr);
        if (curr == prev)
        {
            cnt += 1;
        }
        else
        {
            mx = cnt > mx ? cnt : mx;
            cnt = 0;
        }
        prev = curr;
    } while (curr != 0);
    printf("%d", mx + 1);
    
    return 0;
}