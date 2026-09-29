#include<stdio.h>

int main(){
    float cacoon,reneditta,silk,rate,wage;
    float revenue,labor_cost;
    while(1){
        printf("Enter the amount of cacoon , reneditta , rate , wages : ");
        scanf("%f %f %f %f",&cacoon,&reneditta,&rate,&wage);
        silk=cacoon/reneditta;
        revenue=silk*rate;
        labor_cost=wage*cacoon;
        printf("Raw silk (kg) : %.2f\n",silk);
        printf("Gross revenue (Rs) : %.2f\n",revenue);
        printf("Wage cost (Rs) : %.2f\n",labor_cost);
        printf("Net margin (Rs) : %.2f\n",revenue-labor_cost);
        printf("\n=============================================================\n");
    }
    return 0;
}



/*                                  thank you                                   */
/*                        𝑫𝒆𝒗𝒆𝒍𝒐𝒑𝒆𝒅 𝒃𝒚 😎𝔸𝕟𝕚𝕜𝕖𝕥 𝕂𝕦𝕞𝕒𝕣😎                      */