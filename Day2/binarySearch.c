#include<stdio.h>
int binarySearch(int arr[],int val,int size){
    int start=0,end=size-1;
    int mid=(end+start)/2;
    while(start<=end){
        if(arr[mid]==val) return mid;
        else if(arr[mid]<val) start=mid+1;
        else end=mid-1;
        mid=(end+start)/2;
    }
    return -1;
}
int main(){
    int m;
    printf("Enter all value size -> ");
    scanf("%d",&m);
    int arr[m];
    printf("Enter all value of array -> ");
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    // int arr[6]={1,2,3,4,5,8};
    for(int i=0;i<m;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter a Number which you want search ");
    int n;
    scanf("%d",&n);
    int ans=binarySearch(arr,n,6);
    printf("value index is %d",ans);
}