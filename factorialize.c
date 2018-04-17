#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int i;
    int key = atoi(argv[1]);
    if (argc == 2)
    {
        for (i = 1; key >= 1; key--)
        {
            i = key * i;
        }
        printf("%i\n", i);
    }
}










