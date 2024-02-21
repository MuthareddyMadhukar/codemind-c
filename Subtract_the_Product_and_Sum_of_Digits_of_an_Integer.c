#include <stdio.h>
int main(){
    int n,a,sum=0,pro=1,d;
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        sum+=a;
        pro*=a;
        n=n/10;
    }
    d=pro-sum;
    printf("%d",d);
}