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
    switch(bus_number){
        case 57:
            printf(" go to Pinklao Bangkhunnon\n");
            break;
        case 3:
            printf(" go to Sanam Luang Ladproao\n");
            break;
        case 71:
            printf(" go to Hua Lamphong Yaowarat\n");
            break;
        case 56:
            printf(" go to Bang Lamphu Sqphan Krungthon\n");
            break;
        case 539:
            printf(" go to Anusawari Chai Samsen\n");
            break;
        default:
            printf(" No bus number information\n");
    }
    senpa
    
    return 0;
}