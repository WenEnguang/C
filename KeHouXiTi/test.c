#include<stdio.h>
int main(){
    int i,j;
    char s[]="I am a student";
    for(i=j=0;s[i]!='\0';i++){
        if(s[i]==' '){
            continue;
        }
        else{
            s[j++]=s[i];
        }
    }
    s[j]='\0';
    puts(s);
    return 0;
}