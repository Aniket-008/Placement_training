#include<stdio.h>

int main(){
    float distance;
    int hour,extra;

    printf("Enter the distance (in km) and hour of travel : ");
    scanf("%f %d",&distance,&hour);

    extra = (distance<=1.8)?0:(int)(distance-1.8+0.000001)+((distance-1.8+0.000001)>(int)(distance-1.8+0.000001));

    printf("Extra kilometres : %d\n",extra);
    printf("Base fare (Rs) : %.2f\n",30+(extra*15));
    printf("Fare payable (Rs) : %.2f\n",((hour>=22)||(hour<5))?(30+(extra*15))*1.5:(30+(extra*15)));

    return 0;
}



/*                                  thank you                                   */
/*                        𝑫𝒆𝒗𝒆𝒍𝒐𝒑𝒆𝒅 𝒃𝒚 😎𝔸𝕟𝕚𝕜𝕖𝕥 𝕂𝕦𝕞𝕒𝕣😎                      */