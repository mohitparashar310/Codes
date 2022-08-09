#include<stdio.h>
int number(int);
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    number(a);
    printf("%d",number(a));
    return 0;
    
}
int number(int a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }

}