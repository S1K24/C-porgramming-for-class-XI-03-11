#include<stdio.h>
//pointer concept
int main(){
    int num=10;
    int *ptr=&num;
    int **ptr2=&ptr;//pointer to pointer
    printf("num%d\n",num);
    printf("*ptr=%d\n",*ptr);
    printf("**ptr2=%d\n",**ptr2);

}