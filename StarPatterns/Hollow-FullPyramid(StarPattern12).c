# include <stdio.h> 

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n * 2) - 1; j++)
        {
            if (i == n || (i +j) == (n + 1) || (j - i) == (n - 1))
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