#include <stdio.h>
int main() {
    int n;
    int temp=0;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        sum=sum+temp;
        printf("%d ",sum);
    }
    return 0;
}