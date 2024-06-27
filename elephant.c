#include<stdio.h>
#include<conio.h>
int main(){
    int x;
    int a=0;
    scanf("%d",&x);
    if(x<=5){
        a=1;
    }
    else{
        if(x%5==0){
            a=x/5;
        } 
        else{
            a=(x/5)+1;
        }
    }
    printf("%d",a);
return 0;
}

