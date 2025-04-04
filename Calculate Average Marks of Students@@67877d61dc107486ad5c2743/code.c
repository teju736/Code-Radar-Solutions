#include <stdio.h>

int main() {
    int n, roll;
    char name[100];
    float marks;
    scanf("%d" , &n);
    float sum = 0;
    for(int i =0 ; i<n ; i++){
        scanf("%d" , &roll);
        scanf("%s" , &name);
        scanf("%f" , &marks);
        sum+= marks;
    }
    float av = sum/n;
    printf("Average Marks: %.2f" , av);
    
    return 0;
}