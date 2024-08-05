#include <stdio.h>
void main()
{
    int i = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (j % 7 == 0)
                printf("+ ");
            else
                printf("* ");
        }
        printf("\n");
    }
}
