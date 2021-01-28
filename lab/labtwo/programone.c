#include <stdio.h>

#include <stdlib.h>

struct node

{

    int data;

    struct node *ptr;
};

int main()

{

    int i = 0, n = 0, pos = 0, ch, flag = 0, stop = 0, search;

    struct node *start = NULL, *last = NULL, *t, *t1, *current, *prev, *nextTo;

    printf("Enter 1 for creating list\n");

    printf("Enter 2 for inserting an element \n");

    printf("Enter 3 for deleting an element\n");

    printf("Enter 4 for searching an element \n");

    printf("Enter 5 for printing the list\n");

    printf("Enter 6 for reversing\n");

    printf("Enter 7 for exiting\n");

    do

    {

        printf("Enter your choice:\n");

        scanf("%d", &ch);

        switch (ch)

        {

        case 1:

            printf("Enter the number of elements\n");

            scanf("%d", &n);

            printf("enter the elements");

            for (i = 0; i < n; i++)

            {

                t = (struct node *)malloc(sizeof(struct node));

                scanf("%d", &t->data);

                t->ptr = NULL;

                if (start == NULL)

                {

                    start = t;

                    last = t;
                }

                else

                {

                    last->ptr = t;

                    last = t;
                }
            }

            break;

        case 2:

            t = (struct node *)malloc(sizeof(struct node));

            i = 1;

            printf("Enter the position at which element is to be inserted\n");

            scanf("%d", &pos);

            printf("enter the element\n");

            scanf("%d", &t->data);

            if (start == NULL)

            {

                t->ptr = NULL;

                start = t;
            }

            else

            {

                t1 = start;

                while (t1->ptr != NULL)

                {

                    i++;

                    if (i == pos)

                    {

                        t->ptr = t1->ptr;

                        t1->ptr = t;

                        break;
                    }

                    t1 = t1->ptr;
                }

                if (t1->ptr == NULL)

                {

                    t1->ptr = t;

                    t->ptr = NULL;
                }
            }

            n++;

            break;

        case 3:

            t = NULL;

            t1 = start;

            pos = 0;

            i = 0;

            printf("Enter the position at which element is to be deleted\n");

            scanf("%d", &pos);

            if (pos == 1)

            {

                start = t1->ptr;
            }

            else

            {

                while (t1->ptr != NULL)

                {

                    i++;

                    if (i == pos)

                    {

                        t->ptr = t1->ptr;

                        free(t1);

                        break;
                    }

                    t = t1;

                    t1 = t1->ptr;
                }

                if (t1->ptr == NULL)

                {

                    t->ptr = NULL;
                }
            }

            n--;

            break;

        case 4:

            i = 0;

            printf("Enter the element you want to search\n");

            scanf("%d", &search);

            t1 = start;

            while (t1 != NULL)

            {

                i++;

                if (t1->data == search)

                {

                    printf("Element found at position :%d \n", i);

                    flag = 1;

                    break;
                }

                t1 = t1->ptr;
            }

            if (flag == 0)

                printf("Element not found\n");

            break;

        case 5:

            printf("The elements are:\n");

            t1 = start;

            while (t1 != NULL)

            {

                printf("%d ", t1->data);

                t1 = t1->ptr;
            }

            printf("\n");

            break;

        case 6:
            current = start;
            prev = NULL, nextTo = NULL;

            while (current != NULL)
            {
                nextTo = current->ptr;
                current->ptr = prev;
                prev = current;
                current = nextTo;
            }
            start = prev;

            t = start;

            while (t != NULL)
            {
                t = t->ptr;
            }

            break;
        case 7:

            stop = 1;

            break;

        default:

            printf("Invalid choice\n");
        }

        if (stop == 1)

            break;

    }

    while (stop != 1);

    free(t);
}