// ...existing code...
#include "stdio.h"
#include "string.h"

int sumNumber(int n1, int n2){
    printf("N1 is %d\n", n1);
    printf("N2 is %d\n", n2);
    return n1 + n2; 
}

/* เพิ่มประกาศ prototype */
char* showWelcome(const char* fname, const char* lname);

int main(){
    printf("Sum is number is %d\n", sumNumber(10, 20) );
    /* ใช้ %s สำหรับสตริง */
    printf("Welcome for %s\n", showWelcome("Ninnin", "Wowwow"));
    
    return 0;
}

/* ปรับให้รวมชื่ออย่างปลอดภัยโดยไม่แก้ input และคืน pointer ไปยัง buffer ภายใน */
char* showWelcome(const char* fname, const char* lname){
    static char buf[256];
    /* รวม fname และ lname (มีช่องว่างระหว่างชื่อ) */
    snprintf(buf, sizeof(buf), "%s %s", fname, lname);
    return buf;
}
// ...existing code...