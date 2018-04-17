#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, string argv[])
{

    int key = atoi(argv[1]);
    int lastnum = 0;
    int num = 1;
    int result = 0;
    if (argc == 2)
    {
        while (num <= key)
        {
            if ( num % 2 != 0)
            {
                result += num;
            }
            num += lastnum;
            lastnum = num - lastnum;
        }
        printf("%i\n", result);
    }
}
