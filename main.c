#include<stdio.h>
//concept of Array implementation in C & linear serarch basic approach
//Array : a collection of similar data types
int arr[5];
void inputarray(){
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }  
}
void printarray(){
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }  
}
void linearsearcht(int value){
    for(int i=0;i<5;i++){
        if(arr[i]==value){
            printf("\nElement found at index %d\n",(i+1));
            return;
        }
    }
    printf("\nElement not found\n");
}
int main(){
    inputarray();
    printarray();
    linearsearcht(3);//linear search
    
    return 0;
}