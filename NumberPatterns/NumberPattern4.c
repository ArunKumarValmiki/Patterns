# include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    
    int odd = 1, even = 2; 
    
    for (int i = 0; i < n ;i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d ",odd);
                odd += 2;
            }
            else
            {
                printf("%d ",even);
                even += 2;
            }
        }
        printf("\n");
    }
}

