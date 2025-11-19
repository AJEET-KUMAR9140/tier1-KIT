#include<stdio.h>
#include<stdbool.h>
bool compair(char ch[],int m,char ph[],int p){
    int i=0,j=0;
    while(i<m && j<p){
        if(ch[i]!=ph[j]) return false;
        i++;
        j++;
    }
    return true;
}
int main(){
     char *ch="ajeet";
     char *ph="ajit";
     int m=5,p=5;
 
    bool ans=compair(ch,m,ph,p);
    if(ans){
        printf("Yes it is present");
    }else{
        printf("Not it is present");
    }
}