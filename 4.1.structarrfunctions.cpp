#include<stdio.h>
#include<stdlib.h>
//Functions on arrays:
/*
    1. display()
    2. add(x)/append(x)
    3. insert(index,x)
    4. delete(index)
    5. max()
    6. set()
    7. get()
    8. avg()
*/
struct array{
    int *A;
    int size;
    int length;
};
void display(struct array arr){            //display operation
    for(int i=0; i<arr.length;i++)
     printf("%d\n",arr.A[i]);
}
void append(struct array *arr,int x){          //add/append operation
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}
void insert(struct array *arr,int index, int ins){    //insert at a given location operation
  if(index>0 && index<arr->length){

    for(int i=arr->length; i>index; i--){
        arr->A[i]=arr->A[i-1];
    }
    arr->A[index]=ins;
    arr->length++;
  }
  else 
    printf("Error: the given index is greater than the actual length of the array");
}
int deletes(struct array *arr, int index){   //y
    int x=0;
    int i;
    if(index>=0 && index<arr->length){
        x = arr->A[index];                                  //makes the value of the index zero
        for(i=index; i<arr->length-1; i++){                 //length-1 because we deleted one index
                arr->A[i]=arr->A[i+1];                      //makes the a[i] value equal to a[i+1]
        }
        arr->length--;
        return x;
    }
    return 0;
}
int main(){
    struct array arr;
    arr.A=(int *) malloc(arr.size*sizeof(int *));
    printf("Enter the size of the array: ");
    scanf("%d",&arr.size);
    printf("Enter the number of elements you will enter in the array: ");
    scanf("%d",&arr.length);
    printf("Enter less than or equal to %d elements: ");
    for(int i=0;i<arr.length;i++){
        scanf("%d",&arr.A[i]);
    }
    append(&arr,7);
    insert(&arr,4,6);
    deletes(&arr,0);
    display(arr);
}