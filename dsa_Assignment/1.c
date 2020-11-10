#include <stdio.h>
#include<stdlib.h>

int create(int arr, int n) {

}
int main() {
    printf("Choices available to you are : \n" );
    printf("1. create \n2. insert\n3. delete\n 4. search\n 5. sort \n 6. swap\n 7. print");
    int option,n;
    int arr[n];
    printf("Enter option :");
    scanf("%d",&option);
    switch(option) {
        case 1:
            printf("Enter the no of elements");
            scanf("%d",&n);
            arr = create(arr,n);
    }
}