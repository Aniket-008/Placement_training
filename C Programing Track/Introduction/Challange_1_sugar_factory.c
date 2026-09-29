#include<stdio.h>

int main(){
    float tonnes,recover,price;
    printf("Enter the value of amount of canes (in tonnes),recovery percentage, and the base price : ");
    scanf("%f %f %f",&tonnes,&recover,&price);
    printf("Payable rate (Rs/tonne) : %.2f\n",price*(recover/10));
    printf("Gross payment (Rs) : %.2f\n",tonnes*(price*(recover/10)));
    printf("Harvesting deduction (Rs) : %.2f\n",(tonnes*(price*(recover/10)))*0.02);
    printf("Net payment (Rs) : %.2f\n",(tonnes*(price*(recover/10)))-((tonnes*(price*(recover/10)))*0.02));
    return 0;
}



/*                                  thank you                                   */
/*                        𝑫𝒆𝒗𝒆𝒍𝒐𝒑𝒆𝒅 𝒃𝒚 😎𝔸𝕟𝕚𝕜𝕖𝕥 𝕂𝕦𝕞𝕒𝕣😎                      */