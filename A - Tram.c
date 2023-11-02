#include <stdio.h>
int main()//Md.Tahmid Shah Tamim
{
    int t;
    scanf("%d",&t);
    int sum1=0,sum=0;
    int cap=0;
    while(t--){
        int ex,enter;
        scanf("%d %d",&ex,&enter);
         sum1=enter-ex;
        sum+=sum1;
        if (sum>cap) {
        cap= sum;
}

    }
    printf("%d\n",cap);

    return 0;
}
