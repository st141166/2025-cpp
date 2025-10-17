#include <cstdio>
#include <cmath>

int main (int argc, char** argv) 
{
    char x1 = 'A';
    char x2 = 'A';
    int y1 = 0;
    int y2 = 0;
    int x1_int = 0;
    int x2_int = 0;
    int ans = 0;

    scanf("%c%d %c%d", &x1, &y1, &x2, &y2);

    x1_int = (x1 == 'A' ? 1 : x1 == 'B' ? 2 : x1 == 'C' ? 3 : x1 == 'D' ? 4 : x1 == 'E' ? 5 : x1 == 'F' ? 6 : x1 == 'G' ? 7 : 8);
    x2_int = (x2 == 'A' ? 1 : x2 == 'B' ? 2 : x2 == 'C' ? 3 : x2 == 'D' ? 4 : x2 == 'E' ? 5 : x2 == 'F' ? 6 : x2 == 'G' ? 7 : 8);

    if ((abs(x1_int - x2_int) == 0) || (abs(y1 - y2) == 0))
    {
        printf("Rook");
        ans = 1;
    }
    if (abs(x1_int - x2_int) == abs(y1 - y2))
    {
        printf(ans == 1 ? "\nBishop" : "Bishop");
        ans = 1;
    }
    if ((abs(x1_int - x2_int) == 2 && abs(y1 - y2) == 1) || (abs(x1_int - x2_int) == 1 && abs(y1 - y2) == 2))
    {
        printf(ans == 1 ? "\nKnight" : "Knight");
        ans = 1;
    }
    if (((abs(x1_int - x2_int) == 0) || (abs(y1 - y2) == 0)) || (abs(x1_int - x2_int) == abs(y1 - y2)))
    {
        printf(ans == 1 ? "\nQueen" : "Queen");
        ans = 1;
    }
    if ((abs(x1_int - x2_int) <= 1) && (abs(y1 - y2) <= 1))
    {
        printf(ans == 1 ? "\nKing" : "King");
        ans = 1;
    }
    if (((y2 - y1 == 1) || (y1 == 2 && y2 == 4)) && (x1_int - x2_int == 0) && (y1 != 1))
    {
        printf(ans == 1 ? "\nPawn" : "Pawn");
        ans = 1;
    }
    if (ans == 0)
    {
        printf("Nobody");
    }
    return 0;
}