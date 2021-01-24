#include <stdio.h>
//#include<conio.h>
void swap(int *p, int *q)
{
    int c;
    c = *p;
    *p = *q;
    *q = c;
}
void selsort(int x[], int n)
{
    int i, j, l, p;
    for (i = n - 1; i > 0; i--)
    {
        l = x[0];
        p = 0;
        for (j = 1; j <= i; j++)
        {
            if (x[j] > l)
            {
                l = x[j];
                p = j;
            }
        }
        x[p] = x[i];
        x[i] = l;
    }
}
void bubsort(int x[], int n)
{
    int i, j;
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (x[j] > x[j + 1])
                swap(&x[j], &x[j + 1]);
        }
    }
}

void insertsort(int x[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        if (x[i] > x[i + 1])
        {
            temp = x[i + 1];
            for (j = i; j >= 0 && x[j] > temp; j--)
                x[j + 1] = x[j];
            x[j + 1] = temp;
        }
    }
}
void quicksort(int x[], int lb, int ub)
{
    int i, j, up, down, pivot;
    down = lb;
    up = ub;
    pivot = x[lb];
    if (lb >= ub)
        return;
    while (down < up)
    {
        while (x[down] <= pivot && down <= ub)
            down++;
        while (x[up] > pivot)
            up--;
        if (up > down)
            swap(&x[down], &x[up]);
    }
    x[lb] = x[up];
    x[up] = pivot;
    quicksort(x, lb, up - 1);
    quicksort(x, up + 1, ub);
}

void mergesort(int x[], int n)
{
    int i, j, k, size, l1, l2, u1, u2, aux[n];
    size = 1;
    while (size < n)
    {
        l1 = 0;
        k = 0;
        while (l1 + size < n)
        {
            l2 = l1 + size;
            u1 = l2 - 1;
            u2 = (l2 + size - 1) < n ? (l2 + size - 1) : n - 1;
            for (i = l1, j = l2; i <= u1 && j <= u2; k++)
            {
                if (x[i] <= x[j])
                    aux[k] = x[i++];
                else
                    aux[k] = x[j++];
            }
            for (; i <= u1; k++)
                aux[k] = x[i++];
            for (; j <= u2; k++)
                aux[k] = x[j++];

            l1 = u2 + 1;
        }
        for (i = l1; k < n; i++)
            aux[k++] = x[i];
        for (i = 0; i < n; i++)
            x[i] = aux[i];
        size *= 2;
    }
}

void heapify(int x[], int n, int i)
{
    int l, r, p;
    l = 2 * i + 1;
    r = 2 * i + 2;
    p = i;
    if (l < n && x[l] > x[p])
        p = l;
    if (r < n && x[r] > x[p])
        p = r;
    if (p != i)
    {
        swap(&x[p], &x[i]);
        heapify(x, n, p);
    }
}

void heapsort(int x[], int n)
{
    int i;
    for (i = n / 2; i >= 0; i--)
        heapify(x, n, i);
    for (i = n - 1; i >= 0; i--)
    {
        swap(&x[0], &x[i]);
        heapify(x, i, 0);
    }
}

void display(int x[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d\t", x[i]);
}

void main()
{
    //clrscr();
    int x[] = {23, 45, 65, 78, 4, 14, 32, 9, 10, 36};
    int y[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int z[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10};

    selsort(x, 10);
    printf("\nSelection Sort\n");
    display(x, 10);
    bubsort(x, 10);
    printf("\nBubble Sort\n");
    display(x, 10);
    insertsort(x, 10);
    printf("\nInsertion Sort\n");
    display(x, 10);
    quicksort(x, 0, 9);
    printf("\nQuick Sort\n");
    display(x, 10);
    printf("\nMerge Sort\n");
    mergesort(x, 10);
    display(x, 10);
    heapsort(x, 10);
    printf("\nHeap Sort\n");
    display(x, 10);

    printf("\n Sorted Array");

    selsort(y, 10);
    printf("\nSelection Sort\n");
    display(y, 10);
    bubsort(y, 10);
    printf("\nBubble Sort\n");
    display(y, 10);
    insertsort(y, 10);
    printf("\nInsertion Sort\n");
    display(y, 10);
    quicksort(y, 0, 9);
    printf("\nQuick Sort\n");
    display(y, 10);
    printf("\nMerge Sort\n");
    mergesort(y, 10);
    display(y, 10);
    heapsort(y, 10);
    printf("\nHeap Sort\n");
    display(y, 10);

    printf("\n Reverse Sorted Array");

    selsort(z, 10);
    printf("\nSelection Sort\n");
    display(z, 10);
    bubsort(z, 10);
    printf("\nBubble Sort\n");
    display(z, 10);
    insertsort(z, 10);
    printf("\nInsertion Sort\n");
    display(z, 10);
    quicksort(z, 0, 9);
    printf("\nQuick Sort\n");
    display(z, 10);
    printf("\nMerge Sort\n");
    mergesort(z, 10);
    display(z, 10);
    heapsort(z, 10);
    printf("\nHeap Sort\n");
    display(z, 10);

    //getch();
}
