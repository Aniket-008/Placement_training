#include<stdio.h>

int main(){
    int axle;
    float pays;

    printf("Enter the number of axle and pays for per axle : ");
    scanf("%d %f",&axle,&pays);
    printf("Single toll (Rs) : %.2f\n",axle*pays);
    printf("Return pass (Rs) : %.2f\n",1.5*(axle*pays));
    printf("Saving vs two singles (Rs) : %.2f\n",(2*(axle*pays))-(1.5*(axle*pays)));
    return 0;
}



/*                                  thank you                                   */
/*                        𝑫𝒆𝒗𝒆𝒍𝒐𝒑𝒆𝒅 𝒃𝒚 😎𝔸𝕟𝕚𝕜𝕖𝕥 𝕂𝕦𝕞𝕒𝕣😎                      */