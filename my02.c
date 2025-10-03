//preprocessor directive
//คือประกาศ Libary
#include <stdio.h>
#include "math.h"

//คือประกาศค่าคงที่ คือ การสร้างตัวแทนของอะไรสักอย่างหนึ่ง เพื่อเอาไปใช้งานในโปรแกรม
#define ShowPa printf("++++++++++++++++++/n");
#define SMILE "^-^ 555"

//global (ใช้ที่ไหนก็ได้) Declaration (ประกาศ/สร้าง)
int number = 999;
void showHey();

//user-defined function
void showhi(){
    printf("hi......./n");
}

//main function
int main(){
    printf("DTI-SAU");
    printf("%If\n", pow(2, 20));
    ShowPa
    showHey();
    showhi();

    return 0;
}

//user-defined function
void showHey(){
    printf("Hey......./n");
}