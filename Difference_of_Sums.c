#include <stdio.h>
#include <math.h>
int main(){
    int ssq,sqs,n;
    scanf("%d",&n);
    ssq=n*(n+1)*(2*n+1)/6;
    sqs=pow((n*(n+1)/2),2);
    printf("%d",abs(sqs-ssq));
}