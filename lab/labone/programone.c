#include <stdio.h>
#include <stdlib.h>

int main()
{

    int option = 0, n, i, j, index, elem, temp;
    int arr[n];
    do
    {
        printf("Choices available to you are : \n");

        printf("1. create\n2. insert\n3. delete\n4. search\n5. print\n6. sort\n");
        printf("Enter option : ");

        scanf("%d", &option);

        switch (option)
        {

        case 1:

            printf("Enter the no of elements \n");

            scanf("%d", &n);

            for (i = 0; i < n; i++)
            {

                printf("Enter element at index %d : ", i);

                scanf("%d", &arr[i]);
            }

            break;

        case 2:

            if (n == 0)
            {

                printf("Initialize the array first");

                continue;
            }

            else
            {

                printf("Enter the index at which you want to insert the element : ");

                scanf("%d", &index);

                if (index > n)
                {

                    printf("Out of stack :p \n");

                    continue;
                }

                else
                {

                    printf("Enter the element you want to insert : ");

                    scanf("%d", &elem);

                    n++;

                    for (i = n; i >= index; i--)
                    {

                        arr[i] = arr[i - 1];
                    }

                    arr[index] = elem;
                }
            }

            break;

        case 3:

            printf("Enter the index of the element you wish to delete : ");

            scanf("%d", &index);

            if (index >= n)
            {

                printf("Deletion not possible \n");
            }

            for (i = index; i < n; i++)
            {

                arr[i] = arr[i + 1];
            }

            n--;

            break;

        case 4:

            printf("Enter the element to find : ");

            scanf("%d", &elem);

            int found, count = 0;

            for (i = 0; i < n; i++)
            {

                if (arr[i] == elem)
                {

                    printf("Element found at index : %d \n", i);

                    count++;

                    break;
                }
            }

            if (count != 1)
            {

                printf("Element not found \n");
            }

            break;

        case 5:

            for (i = 0; i < n; i++)
            {

                printf("%d ", arr[i]);
            }

            printf("\n");

            break;

        case 6:

            for (i = 0; i < n - 1; i++)
            {

                for (j = 0; j < n - i - 1; j++)
                {

                    if (arr[j] > arr[j + 1])
                    {

                        temp = arr[j];

                        arr[j] = arr[j + 1];

                        arr[j + 1] = temp;
                    }
                }
            }

            break;

        default:

            printf("Enter right option");

            break;
        }

    } while (option != 7);
    // return 0;
}