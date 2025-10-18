#include <cstdio>

int main (int argc, char** argv)
{
   int n = 0;
   int cnt = 0;
   int mx = 0;
   scanf("%d", &n);
   for (int i = 0; i < n; ++i)
   {
       int temp = 0;
       scanf("%d", &temp);
       if (temp > 0)
       {
           cnt += 1;
       }
       else
       {
           mx = cnt > mx ? cnt : mx;
           cnt = 0;
           
       }
   } 
   mx = cnt > mx ? cnt : mx;
   printf("%d", mx);

   return 0;
}