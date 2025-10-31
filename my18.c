//no parameter - has return
//return type (data type) -> int, long int, float, double, char, void
#include "stdio.h"

// เพิ่ม prototype
int dti01(void);
double dti02(void);

int dti01(){
    return 555;
}

int main(){
    double xxx, yyy;

    printf("Result of call function dti01 = %d\n", dti01());
    xxx = dti02();
    
    printf("%lf\n", xxx + dti02());

    return 0;
}

double dti02(){
    printf("wow....\n");
    return 10 * 20.5; // ลบ single quote ออก
}