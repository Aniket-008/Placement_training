#include<stdio.h>

int main(){
    int depth;
    
    printf("Enter the depth : ");
    scanf("%d",&depth);

    int cal=(depth>0 && depth<=300)?depth*75:(depth>300 && depth<=500)?(((depth-300)*95)+(75*300)):(depth>500)?((300*75)+(200*95)+((depth-500)*130)):0;
    int casing=(depth>0 && depth<60)?(depth*400):(depth==0)?(0):(60*400);

    printf("Drilling charge (Rs) : %d\n",cal);
    printf("Casing charge (Rs) : %d\n",casing);
    printf("Total (Rs) : %d\n",casing+cal);
    
    return 0;

}



/*                                  thank you                                   */
/*                        𝑫𝒆𝒗𝒆𝒍𝒐𝒑𝒆𝒅 𝒃𝒚 😎𝔸𝕟𝕚𝕜𝕖𝕥 𝕂𝕦𝕞𝕒𝕣😎                      */