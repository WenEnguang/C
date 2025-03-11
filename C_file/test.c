#include<stdio.h>
int main(){
    int i;
    for(i=5;i<15;i++){
        if(i%4==0){
            printf("%2d",i);
        }
        else
            continue;
    }
}