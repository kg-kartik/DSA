#include <stdio.h>

void main()
{
    int n, m, choice, p, q, option, option1, opt1, tr[20][20];
    int a[10][10], b[10][10], add[10][10], sub[10][10];

    printf("Enter the no of rows for first matrix : ");
    scanf("%d", &m);
    printf("Enter the no of columns for first matrix : ");
    scanf("%d", &n);
    printf("Enter the elements for first matrix \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the no of rows for second matrix: ");
    scanf("%d", &p);

    printf("Enter the no of columns for second matrix: ");
    scanf("%d", &q);

    printf("Enter the Data Elements of second matrices\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    do
    {
        if (m == p && n == q)
        {
            //Condition for addition and subtraction
            printf("Enter 1 for addtion or subtraction of matrices\n");
            if (n == p)
            {
                //Condition for multiplication
                printf("Enter 2 for multiplication of matrices\n");
            }
            else if (m != n && n == p)
            {
                printf("Enter 2 for multiplication of matrices\n");
                printf("Enter 3 for transpose of first matrices\n");
            }
            else
            {
                printf("Enter 3 for transpose of first matrices\n");
            }
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                for (int i = 0; i < m; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        add[i][j] = a[i][j] + b[i][j];
                        sub[i][j] = a[i][j] - b[i][j];
                    }
                }
                printf("Enter 1 for Addition and 2 for Subtraction : ");
                scanf("%d", &option);
                switch (option)
                {
                case 1:
                    printf("The resultant matrix is : \n");
                    for (int i = 0; i < m; i++)
                    {
                        for (int j = 0; j < n; j++)
                        {
                            printf("%d", add[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                case 2:
                    printf("The resultant matrix is : \n");
                    for (int i = 0; i < m; i++)
                    {
                        for (int j = 0; j < n; j++)
                        {
                            printf("%d", sub[i][j]);
                        }
                        printf("\n");
                    }
                }
                break;
            case 2:
                printf("The resultant matrix is : \n");
                int k;
                for (int i = 0; i < m; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        add[i][j] = 0;
                        for (k = 0; k < m; k++)
                        {
                            add[i][j] += a[i][k] * b[k][j];
                        }
                        printf("%d\t", add[i][j]);
                    }
                    printf("\n");
                }
                break;

                break;
            }
        }
    } while (choice > 0);
}