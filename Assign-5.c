#include<stdio.h>
void natural(int);
int main(){
    int n;
    printf("Enter number of terms:");
    scanf("%d",&n);
    natural(n);
    return 0;
}
void natural(int n){
    int i;
    for(i=0;i<=n;i++){
        if(i%2!=0){

        printf("%d\n",i);
        }        
    }
}