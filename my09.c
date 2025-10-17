#include <stdio.h>

#define senpa printf("------------------------------\n");

int main(){
    int bus_number;    //%d

    senpa
    printf("      Bus Number Information\n");
    senpa
    printf("Enter bus number : ");
    scanf("%d", &bus_number);
    senpa
    if(bus_number  == 57 ){
        printf(" go to Pinklao Bangkhunnon\n");
    }else if (bus_number == 3 ){
        printf(" go to Sanam Luang Ladproao\n");
    }else if (bus_number == 71 ){
        printf(" go to Hua Lamphong Yaowarat\n");
    }else if (bus_number == 56 ){
        printf(" go to Bang Lamphu Sqphan Krungthon\n");
    }else if (bus_number == 539 ){
        printf(" go to Anusawari Chai Samsen\n");
    }else{
        printf(" No bus number information\n");
    }
    senpa
    
    return 0;
}