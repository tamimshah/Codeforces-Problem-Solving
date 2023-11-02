#include <stdio.h>
int main() //Md.Tahmid Shah Tamim
{
    int t;
    scanf("%d",&t);
    int sum1=0,sum2=0;
    int sum3=0;
    while(t--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        sum1=x+y;
        sum2=y+z;
        sum3= x+z;
        if(sum1 >=10 || sum2 >=10 || sum3>=10){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }


    return 0;
}
