// Code to implement convolution of {2,3,4} and {1,2,1}
#include<stdio.h>
#define LENGTH1 3
#define LENGTH2 3
int x1[LENGTH1]={2,3,4,0,0};
int x2[LENGTH2]={1,2,1,0,0};
int y[LENGTH1+LENGTH2-1];
void main(){
    for(int i=0;i<(LENGTH1+LENGTH2-1);i++){
     
        for(int j=0;j<=i;j++){
            y[i]+=x1[j]*x2[i-j];
        }
    }
    for(int i=0;i<(LENGTH1+LENGTH2-1);i++){
        printf("%d\n",y[i]);
    }
}