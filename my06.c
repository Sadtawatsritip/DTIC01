//ป้อนชื่อ-นามสกุล ชื่อเล่น อายุ เงินเดือน แล้วแสดงผลทางหน้าจอ
#include <stdio.h> 

#define showLine printf("------------------------------\n")

int main() {
    char fullname[50];     //%[^\n]
    char nickname[20];     //%s
    int age;               //%d
    float salary;          //%lf

    showLine;
    printf("     You Information    \n");
    showLine;
    printf("Enter your Fullname : ");
    scanf("%[^\n]", fullname);  
    printf("Enter your Nickname : ");
    scanf("%s", nickname);
    printf("Enter your Age : ");
    scanf("%d", &age);
    printf("Enter your Salary : ");
    scanf("%f", &salary);
    showLine;
    printf("Your Fullname : %s\n", fullname);
    printf("Your Nickname : %s\n", nickname);
    printf("Your Age : %d years\n", age);   
    printf("Your Salary : %.2f Baht\n", salary);
    showLine;

    return 0; 
}