#include <stdio.h>

int dataA = 100; //Global variable ใช้ที่ไหนก็ได้
const int infol = 111; //Global constant

void showData() {
    int dataB = 200;    //Local variable ใช้ได้เฉพาะในฟ Code block {}
    int dataE;
    const int infol2 = 222;
    // info1 = 333; //Error เพราะเป็น const เปลี่ยนค่าไม่ได้
    // info2 = 444; //Error เพราะเป็น const เปลี่ยนค่าไม่ได้
    // info3 = 555; //Error เพราะเป็น const กำหนดค่าทีหลักไม่ได้ ต้องกำหนดตอนประกาศตัวแปรเท่านั้น
    printf("DataA = %d\n", dataA);
    printf("DataB = %d\n", dataB);
    // pritff("DataC = %d\n", dataC); //Error
    dataC = 400;

}

int main() {
    int dataC = 300; //Local variable ใช้ได้เฉพาะในฟ Code block {}
    printf("DataA = %d\n", dataA);
    printf("DataA = %d\n", dataC);
    // printf("DataB = %d\n", dataB); //Error   
    dataC = 400;
    dataB = 999;
    dataE = 555;  

    return 0;
    
}