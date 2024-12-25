# include <stdio.h> 
# include <stdlib.h> 

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= (n*2) - 1; j++)
        {
            if (j <= n)
            {
                if (i + j <= n)
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
                if (j - i < n)
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