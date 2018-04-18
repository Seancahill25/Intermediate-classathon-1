#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string first = argv[1];
    string second = argv[2];
    char *compare = strstr(first, second);
    if (argc == 3)
    {
        if (compare == false)
        {
            printf("The string does not exist\n");
            return 0;
        }
        else
        {
           printf("The string does exist\n");
           return 1;
        }
    }
}