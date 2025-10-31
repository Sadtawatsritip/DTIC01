//no parameter - no return
#include "stdio.h"

void dti02();
void dti03();

void dti01(){
    dti03();
    printf("Hey.....\n");
    dti03();
}

int main(){
    dti01();
    dti01();
    dti02();
    
    return 0;
}

void dti02(){       printf("Hey.....\n");    }

void dti03(){       printf("Hey.....\n");    }