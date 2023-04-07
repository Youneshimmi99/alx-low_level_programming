#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int amount, count = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    amount = atoi(argv[1]);

    if (amount < 0)
    {
        printf("0\n");
        return 0;
    }

    while (amount > 0)
    {
        if (amount >= 25)
        {
            amount -= 25;
            count++;
        }
        else if (amount >= 10)
        {
            amount -= 10;
            count++;
        }
        else if (amount >= 5)
        {
            amount -= 5;
            count++;
        }
        else if (amount >= 2)
        {
            amount -= 2;
            count++;
        }
        else
        {
            amount -= 1;
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}