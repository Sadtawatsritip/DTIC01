#include "stdio.h"
#define senpa printf("--------------------------\n");

int main(){
    int number;     //int (%d), long int (%ld)

    senpa
    printf("       lucky number    \n");
    senpa
    printf("Enter your lucky number : ");
    scanf("%d", &number);
    senpa
    if(number == 13 ){
        printf("You are correct, 13 is a lucky number\n");
    }
    senpa

    return 0;
}
