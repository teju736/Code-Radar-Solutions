#include <stdio.h>

int main() {
    int  temp;
    char name[100];
    float sum = 0;
    for(int i =0 ; i<7 ; i++){
        scanf("%s" , &name);
        scanf("%d" , &temp);
        sum+= temp;
    }
    float av = sum/7;
    printf("Average Temperature: %.2f" , av);
    
    return 0;
}