# include <stdio.h> 
# include <stdlib.h> 

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                printf("*");
            }
            else if (j == 1 && i % 2 != 0)
            {
                printf("*");
            }
            else if (i == n && j % 2 != 0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}