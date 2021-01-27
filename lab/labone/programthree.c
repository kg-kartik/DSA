#include <stdio.h>

int main()
{
    int m, n, choice, i, j, k;
    float determinant = 0;
    printf("Enter the rows of first matrix\n");
    scanf("%d", &m);
    printf("Enter the columns of first matrix\n");
    scanf("%d", &n);
    int a[m][n], b[m][n], add[m][n], sub[m][n], res[m][n];
    printf("Enter element for the first matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements for second matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for exiting\n");
    int flag = 0;
    while (flag == 0)
    {
        printf("\nEnter your choice of operation: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    *(*(add + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
                }
            }
            printf("\nThe new matrix is\n");
            for (i = 0; i < m; i++)
            {
                printf("\n");
                for (j = 0; j < n; j++)
                    printf("%d", *(*(add + i) + j));
            }
            break;
        case 2:
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    *(*(sub + i) + j) = *(*(a + i) + j) - *(*(b + i) + j);
                }
            }
            printf("\nThe new matrix is\n");
            for (i = 0; i < m; i++)
            {
                printf("\n");
                for (j = 0; j < n; j++)
                    printf("%d", *(*(sub + i) + j));
            }
            break;

        case 3:
            if (m != n)
                printf("Matrix multiplication not possible\n");
            else
            {
                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        *(*(res + i) + j) = 0;
                        for (k = 0; k < n; k++)
                        {
                            *(*(res + i) + j) = *(*(res + i) + j) + *(*(a + i) + k) * *(*(b + k) + j);
                        }
                    }
                }
                printf("\nThe new matrix is\n");
                for (i = 0; i < m; i++)
                {
                    printf("\n");
                    for (j = 0; j < n; j++)
                        printf("%d", *(*(res + i) + j));
                }
            }
            break;
        case 4:
            flag = 1;
            break;
        default:
            printf("Invalid Entry\n");
        }
    }
    return 0;
}