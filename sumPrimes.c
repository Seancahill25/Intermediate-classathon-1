#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

bool isPrime(int);
int sumPrimes(int);

int main(int argc, string argv[])
{
    int key = atoi(argv[1]);
    if (argc == 2)
    {
        printf("total is: %i\n", sumPrimes(key));
    }
}

bool isPrime(int num)
{
    for (int i = 2, max = num / 2; i <= max; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int sumPrimes(int number)
{
    int sum = 0;
    for (int i = 2; i <= number; i++)
    {
        if(isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}


