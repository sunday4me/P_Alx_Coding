#include <stdio.h>

int main(void)
{
    int x;

    for (x = 0; x < 10; x++)
    {
        printf("%d", x);
        if (x < 9)
        {
            printf(", ");
        }
    }
    printf("\n");

    return (0);
}
