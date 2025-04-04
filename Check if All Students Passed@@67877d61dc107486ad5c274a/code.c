#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n], theStudent;
    int i;


    for (i = 0; i < n; i++) {
        scanf("%d", &students[i].roll);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].marks);
    }

    int c = 0;

    for (i = 0; i <= n; i++) {
        if (students[i].marks > 50) {
            c++;
        }
    }
    if(c==n){
printf("All Passed");
    }
    else{
       printf("Not All Passed"); 
    }
        
    
 


    return 0;
}