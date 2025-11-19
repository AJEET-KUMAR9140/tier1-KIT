#include<stdio.h>
int checkValue(int arr[],int val,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==val) return i;
    }
    return 0;
}
int main(){
    int arr[6]={2,3,5,1,8,0};
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter a Number which you want search ");
    int n;
    scanf("%d",&n);
    int ans=checkValue(arr,n,6);
    printf("value index is %d",ans);
}