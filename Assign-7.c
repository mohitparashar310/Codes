#include<stdio.h>
int combinations(int,int,int);
int x(int);
int y(int);
int z(int);
int main(){
    int n,r,ncr,p;
    printf("Enter the number of items:");
    scanf("%d",&n);
    printf("Enter the selected items:");
    scanf("%d",&r);
    p=n-r;
    ncr=combinations(n,r,p);
    printf("Number of combinations are:%d",combinations(n,r,p));
    return 0;
    }

int combinations(int n,int r,int p){
    int C,X,Y,Z;
    x(n);
    y(r);
    z(p);
    C=x(n)/(y(r)*z(p));
    return C;
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
int z(int p){
    int i;
    for(i=0;i<=p;i++){
        if(p==0 || p==1){
            return 1;
        }
        else{
            return(p*z(p-1));
        }
    }
}