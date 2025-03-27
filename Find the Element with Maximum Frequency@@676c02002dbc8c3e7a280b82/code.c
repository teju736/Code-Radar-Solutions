#include <stdio.h>
int main() {
     int n;
    scanf("%d ",&n);
   int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
    }
    int max=1;
    int ans=arr[0];
    int count=1;
    for(int i=1;i<n;i++){
        
        if(arr[i-1]==arr[i]){
            ++count;
        }
        else{
            
            if(max <count && max!=count)
            {
                max=count;
                ans=arr[i-1];
            }
            count=1;
        }
    }
     if(max <count && max!=count)
            {
                max=count;
                ans=arr[n-1];
            }
    printf("%d",ans);
    return 0;
}