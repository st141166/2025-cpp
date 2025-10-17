#include <cstdio>

int main(int argc, char** argv)
{
   int a = 0;
   int b = 0;
   int c = 0;
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   if (a == 0 && b == 0 && c == 0)
   {
      printf("0");
   }
   if (a != 0)
   {
      printf("%d", a);
   }
   if (b != 0)
   {
      if (a != 0 && b > 0)
      {
         printf("+");
      }
      if (b < 0)
      {
         printf("-");
      }
      if (b != 1 && b != -1)
      {
         printf("%d", b > 0 ? b : -b);
      }
      printf("x");
   }
   if (c != 0)
   {
      if ((a != 0 || b != 0) && c > 0)
      {
         printf("+");
      }
      if (c < 0)
      {
         printf("-");
      }
      if (c != 1 && c != -1)
      {
         printf("%d", c > 0 ? c : -c);
      }
      printf("y");
   }
   return 0;
}