#include <stdio.h> //printf(), scanf()

#define ShowPa printf("------------------------------\n");

int main(){
    char pro_id[20], pro_name[50]; //strings %s, char %c 
    float pro_price, pro_sale;     //เพิ่ม semicolon ที่หายไป

    ShowPa
    printf("    Calculate Product Sale\n");
    ShowPa

    printf("Enter product code  : ");
    scanf("%s", pro_id);          //ลบ & เพราะ array ไม่ต้องใช้
    printf("Enter product name  : "); 
    scanf("%s", pro_name);        //ลบ & เพราะ array ไม่ต้องใช้
    printf("Enter product price : ");
    scanf("%f", &pro_price);      //ต้องใช้ & เพราะเป็นตัวแปรธรรมดา
    ShowPa
    
    if(pro_price >= 1000){
        pro_sale = pro_price - (pro_price * 3 / 100.0);
    }else{
        pro_sale = pro_price - (pro_price * 5 / 100.0);
    }
    printf("Product sale : %.2f\n", pro_sale);
    ShowPa
    
    return 0;
}