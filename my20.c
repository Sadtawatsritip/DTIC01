//คำนวณผลรวม และค่าเฉลี่ยจากตัวเลขที่รับทางแป้นพิมพ์ 3 จำนวน และแสดงผลบนหน้าจอ
 
//input?  output?   processe? (คำนวณ/พิสูจน์/ลูป)
 
//feature การทำงานอะไรบ้าง?
//รับตัวเลข 3 จำนวนทางแป้นพิมพ์, คำนวณผลรวม, คำนวณค่าเฉลี่ย, แสดงผลผลรวม, แสดงผลค่าเฉลี่ย, แสดงชื่อโปรแกรม
 
#include <stdio.h>
#define pa printf("------------------------\n");
 
void showHeader( ){
    pa
    printf("   SUM & AVERAGE Number\n");
    pa
}
int calSum(int num1, int num2, int num3){
    return num1 + num2 + num3;
}
double calAverage(int num1, int num2, int num3){
    return (num1 + num2 + num3) / 30.0;
}
void showSum(int sum){
    printf("Sum of number is %d\n", sum);
}
void showAverage(double average){
    printf("Average of number is %lf\n", average);
}
void inputNumber(){
    int num1, num2, num3, sum;
    double average;
    printf("Enter number 1: "); scanf("%d", &num1);
    printf("Enter number 2: "); scanf("%d", &num2);
    printf("Enter number 3: "); scanf("%d", &num3);
    sum = calSum(num1, num2, num3);
    average = calAverage(num1, num2, num3);
    pa
    showSum(sum);
    showAverage(average);
    pa
}
int main(){
    showHeader();
    inputNumber();
    return 0;
}