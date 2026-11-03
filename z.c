#include<stdio.h>
//pointer concept
void main(){
   int arr[4]={1,2,3,4};
   int *ptr=arr;
   int i=0;
//array elements print by pointer with loop..
//    for(i=0;i<4;i++){
//         printf("%d\t",*(ptr+i));
//    }
//using pointer print array elements with loop...
   printf("%d\n",*ptr);
   printf("%d\n",*(ptr+1));
   printf("%d\n",*(ptr+2));
   printf("%d\n",*(ptr+3));


}
   