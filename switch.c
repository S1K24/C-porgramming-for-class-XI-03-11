#include<stdio.h>
//switch case concept
//break statement

int main(){
    int value=1;
    switch(value){
        case 1:
            printf("value is 1\n");
            break;
        case 2:
            printf("value is 2\n");
            break;
        case 3:
            printf("value is 3\n");
            break;
        case 4:
            printf("value is 4\n");
            break;
        case 5:
            printf("value is 5\n");
            break;
        default:
            printf("value is not in the range of 1 to 5\n");
    }
    return 0;
}