#include<stdio.h>
#include<stdlib.h>
//linear search
//pseudo code for linear search
// int main(){
//    int j;
//    int A[10]={1,2,3,4,5,6,7,8,9,10};
//    printf("Enter the element to be searched: ");
//    scanf("%d",&j);
//    for (int i=0;i<10;i++){
//        if(j==A[i]){
//            printf("Elment found at location:%d ",i);
//            exit;
//        }
      
//    }

// }
struct array {
    int *A;
    int size;
    int length;
};

void display(struct array arr){
    for(int i=0;i<arr.length;i++)
        printf("%d\n",arr.A[i]);
}
int main(){
    int j;
    struct array arr;
   arr.A=(int *) malloc(arr.size*sizeof(int *));
    printf("Enter the Size of the array:\n ");
    scanf("%d", &arr.size);
    printf("Enter the number of elements you will be entering in that array: \n");
    scanf("%d", &arr.length);
    printf("Enter %d elements: ",arr.length);
    for(int i=0;i<arr.length;i++){
        scanf("%d",&arr.A[i]);
    }
    display(arr);

    printf("Enter the element you need to search in the array: ");
    scanf("%d",&j);
    for(int i=0; i<arr.length;i++){
        if(arr.A[i]==j){
                printf("Element found at location/index: %d",i);
                exit;
        }
    }
}
