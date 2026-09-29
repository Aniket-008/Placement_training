#include<stdio.h>

int main(){
    int unit;
    float load,max,power;
    printf("Enter the unit consumed,Sanctioned load,maximum demand,Power factor : ");
    scanf("%d %f %f %f",&unit,&load,&max,&power);
    printf("Energy charge (Rs) : %.2f\n",unit*6.40);
    printf("Demand charge (Rs) : %.2f\n",((0.75*max)>load)?((0.75*max)*210):(210*load));
    printf("Power factor adjustment (Rs) : %.2f\n",(power>0.95)?(-1*((int)((power-0.95)/0.01)*0.005)*(unit*6.4)):(power>0.90 && power<=0.95)?(0):((int)((0.90-power)/0.01)*(unit*6.4)));
    printf("Net bill (Rs) : %.2f\n", ((unit*6.4)+(((0.75*max)>load)?((0.75*max)*210):(210*load))+((power>0.95)?(-1*((int)((power-0.95)/0.01)*0.005)*(unit*6.4)):(power>0.90 && power<0.95)?(0):((int)((0.90-power)/0.01)*(unit*6.4)))));
    return 0;
}



/*                                  thank you                                   */
/*                        𝑫𝒆𝒗𝒆𝒍𝒐𝒑𝒆𝒅 𝒃𝒚 😎𝔸𝕟𝕚𝕜𝕖𝕥 𝕂𝕦𝕞𝕒𝕣😎                      */