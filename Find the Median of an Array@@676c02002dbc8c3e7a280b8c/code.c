#include <stdio.h>
int main() {
      int n;
    scanf("%d ",&n);
   int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans;
    if(n%2==0){
        ans=(arr[(n/2)-1]+arr[(n/2)])/2;
    }
    else{
        ans=(arr[((n+1)/2)-1]);
    }
    printf("%d",ans);
    return 0;
}