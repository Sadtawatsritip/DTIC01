#include <stdio.h> //printf(), scanf()

#define ShowPa printf("------------------------------\n");

int main(){
    char pro_id[20], pro_name[50]; //strings %s, char %c 
    float pro_price, pro_sale      //float %f, double %lf

    ShowPa
    printf("    calculate Product sale\n");
    ShowPa

    printf("Enter produce code  : ");
    scanf("%s", &pro_id);
    printf("Enter produce name  : "); 
    scanf("%s", &pro_name);
    printf("Enter produce price : ");
    scanf("%f", &pro_price);
    ShowPa
    if(pro_price >= 1000){
        pro_sale = pro_price - (pro_price * 3 / 100.0);
    }else{
        pro_sale = pro_price - (pro_price * 5 / 100.0);
    }
    printf("product sale : %.2f\n", pro_sale);
    ShowPa
    
    return 0;
}