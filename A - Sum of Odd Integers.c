#include<stdio.h>
int main(){
long t;
scanf("%lld",&t);
while(t--){
    long long x,y;
    scanf("%lld %lld",&x,&y);
     if(x/y>=y){
      if((x%2==0 && y%2==0)||(x%2!=0 && y%2!=0)){
        printf("YES\n");
      }
      else{
        printf("NO\n");
      }
    }
    else{
    printf("NO\n");
    }
    }
    return 0;
}
