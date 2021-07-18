// hello sri this is dilip
#include<stdio.h>
#include<stdlib.h>

int main(){
    //creating a array completely inside the stack
    int A[3][4]={{1,2,3,4},{5,6,7,8},{11,12,13,14}};
    for(int i=0; i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d\n",A[i][j]);
        }
    }
    printf("***************************************************\n");
    //creating a array partially in stack and heap
    int *B[3];
    B[0]= (int *) malloc (4*sizeof(int));
    B[1]= (int *) malloc (4*sizeof(int));
    B[2]= (int *) malloc (4*sizeof(int));
    B[0][0]={1};
    B[0][1]={2};
    B[0][2]={3};
    B[0][3]={4};
    B[1][0]={5};
    B[1][1]={6};
    B[1][2]={7};
    B[1][3]={8};
    B[2][0]={9};
    B[2][1]={10};
    B[2][2]={11};
    B[2][3]={12};
    for(int i=0; i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d \n",A[i][j]);
        }
    }
    
    printf("***************************************************\n");

    //Creating a 2d array completely in heap using double pointers
    int **C;
    C = (int **) malloc (3*sizeof(int*));
    // A = new int*[3];
    C[0]=(int *) malloc (4*sizeof(int));
    C[1]=(int *) malloc (4*sizeof(int));
    C[2]=(int *) malloc (4*sizeof(int));
    C[0][0]={1};
    C[0][1]={2};
    C[0][2]={3};
    C[0][3]={4};
    C[1][0]={5};
    C[1][1]={6};
    C[1][2]={7};
    C[1][3]={8};
    C[2][0]={9};
    C[2][1]={10};
    C[2][2]={11};
    C[2][3]={12};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",C[i][j]);
        }
    }   
}