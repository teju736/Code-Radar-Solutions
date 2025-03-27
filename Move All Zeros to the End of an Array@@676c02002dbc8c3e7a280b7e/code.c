#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    int j=0;
    int count;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
           ++count;
        }
        else{
            arr2[j]=arr[i];
            ++j;
        }
    }
    for(int i=j;i<n;i++){
        arr2[i]=0;
    }
    for(int i=0;i<n;i++){
       printf("%d ",arr2[i]);
    }

    return 0;
}