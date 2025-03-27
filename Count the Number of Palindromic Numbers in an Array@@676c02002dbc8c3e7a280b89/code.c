#include <stdio.h>
int check(int n){
    int m=n;
    int rev=0;
    int digit;
    while(n>0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(rev==m){
        return 1;
    }
    return 0;
}
int main() {
       int n;
    scanf("%d ",&n);
   int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if (check(arr[i])==1){
            ++count;
        }
    }
    printf("%d",count);
    return 0;
}