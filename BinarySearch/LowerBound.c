#include<stdio.h>
int LowerBound(int arr[],int n,int x){
    int l=0,h=n-1,ans=0;
    while(l<h){
        int m=(l+h)/2;
        if(arr[m]>=x){
            ans=m;
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
    return ans;

}
int main(){
    int n;
    printf("Enter the no.of Elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter the Element to be searched: ");
    scanf("%d",&x);
    printf("The Lower Bound of %d is at index.",LowerBound(arr,n,x));
}