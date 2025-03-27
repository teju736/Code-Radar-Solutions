#include <stdio.h>
int main() {
    int n , max;
    scanf("%d" , &n);
    int ar[n];
    int c=0;

    for(int i=0 ; i<n ; i++){
        scanf("%d" , &ar[i]);
    }

    for(int j=1 ; j<n ; j++){
        if(ar[j] > ar[j-1] && ar[j] > ar[j+1]){
            c++;
            printf("%d" , ar[j]);
            break;
        }
        else if(j==n-1 && ar[j] > ar[j-1]){
            c++;
            printf("%d" , ar[j]);
            break;

        }
        
    }
    if(c==0){
        printf("-1");
    }


    return 0;
}