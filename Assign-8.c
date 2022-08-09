#include<stdio.h>
int arrangements(int,int);
int x(int);
int y(int);
int main(){
    int n,r,nPr;
    printf("Enter the number of items:");
    scanf("%d",&n);
    printf("Enter the selected items:");
    scanf("%d",&r);
    nPr=arrangements(n,r);
    printf("Number of arrangements are:%d",arrangements(n,r));
    return 0;
    }

int arrangements(int n,int r){
    int P;
    x(n);
    y(r);
    P=x(n)/y(r);
    return P;
}
int x( int n){
    int i;
    for(i=0;i<=n;i++){
        if(n==0 || n==1){
            return 1;
        }
        else{
            return(n*x(n-1));
        }
    }
}
int y(int r){
    int i;
    for(i=0;i<=r;i++){
        if(r==0 || r==1){
            return 1;
        }
        else{
            return(r*y(r-1));
        }
    }
}
