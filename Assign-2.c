#include <stdio.h>
int simpleinterest(int,int,int);
int main() {
    int p,r,t,SI;
    printf("Enter amount:");
    scanf("%d",&p);
    printf("Enter rate:");
    scanf("%d",&r);
    printf("Enter time:");
    scanf("%d",&t);
    SI=simpleinterest(p,r,t);
    printf("Your simple interest is:%d",SI);
    return 0;
}
int simpleinterest(int p,int r,int t){
    int si;
    si=(p*r*t)/100;
    return si;
    
}