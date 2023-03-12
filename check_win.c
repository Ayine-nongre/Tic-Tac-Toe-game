#include "main.h"

int checker(char *s, char piece)
{
    if (s[0] == piece && s[1] == piece && s[2] == piece)
    {
        if (piece == 88)
            return -1;
        return 1;
    }
    if (s[3] == piece && s[4] == piece && s[5] == piece)
    {
        if (piece == 88)
            return -1;
        return 1;
    }
    if (s[6] == piece && s[7] == piece && s[8] == piece)
    {
        if (piece == 88)
            return -1;
        return 1;
    }
    if (s[0] == piece && s[3] == piece && s[6] == piece)
    {
        if (piece == 88)
            return -1;
        return 1;
    }
    if (s[1] == piece && s[4] == piece && s[7] == piece)
    {
        if (piece == 88)
            return -1;
        return 1;
    }
    if (s[2] == piece && s[5] == piece && s[8] == piece)
    {
        if (piece == 88)
            return -1;
        return 1;
    }
    if (s[0] == piece && s[4] == piece && s[8] == piece)
    {
        if (piece == 88)
            return -1;
        return 1;
    }
    if (s[2] == piece && s[4] == piece && s[6] == piece)
    {
        if (piece == 88)
            return -1;
        return 1;
    }
    if (s[0] != 48 && s[1] != 49 && s[2] != 50 && s[3] != 51 && s[4] != 52 && s[5] != 53 && s[6] != 54 && s[7] != 55 && s[8] != 56)
        return 0;
    return 3;
}
