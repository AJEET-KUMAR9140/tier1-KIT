// Online C compiler to run C program online
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool checkPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(checkPrime(i)){
            printf("%d is prime number \n",i);
        }
    }
    
}