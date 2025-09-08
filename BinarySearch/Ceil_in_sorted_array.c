# include<stdio.h>
void CeilAndFloor(int n,int arr[],int x){
    int l=0,h=n-1,ceil=-1,floor=-1;
    while(l<=h){
        int m=(l+h)/2;
        if(arr[m]==x){
            ceil=arr[m];
            floor=arr[m];

        }
        else if(arr[m]<x){
            floor=arr[m];
            l=m+1;
        }
        else{
            ceil=arr[m];
            h=m-1;

        }
    }
    printf("Ceil: %d\n",ceil);
    printf("Floor: %d\n",floor);
    
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
    printf("Enter the Element to be searched: ");
    int x;
    scanf("%d",&x);
    CeilAndFloor(n,arr,x);
    return 0;
}