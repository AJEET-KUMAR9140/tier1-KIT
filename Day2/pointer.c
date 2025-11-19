#include<stdio.h>
#include<stdbool.h>

int main(){
     char *ch="ajeet";
     printf("%c,",*ch);
     ch++;
     for(int i=1;i<5;i++){
        printf("%c,",*ch);
        ch++;
     }
}