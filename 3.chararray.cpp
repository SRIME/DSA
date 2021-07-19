//Simple character array parenthesis matching code

#include<stdio.h>
#include<stdlib.h>

int main(){
char A[5];
A[0]={'('};
A[1]={'q'};
A[2]={'w'};
A[3]={'c'};
A[4]={')'};
for (int i=0;i<5;i++){
    if(A[i]=='('||A[i]==')')
     exit;
    else
      printf("%c\n",A[i]);
}
}