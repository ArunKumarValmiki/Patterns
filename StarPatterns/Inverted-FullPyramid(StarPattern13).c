#include <stdio.h> 

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            if (j <= n)
            {
                if (i > j || (i+j) % 2 != 0)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                if ((i + j) <= 2 * n && (i + j) % 2 == 0)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
