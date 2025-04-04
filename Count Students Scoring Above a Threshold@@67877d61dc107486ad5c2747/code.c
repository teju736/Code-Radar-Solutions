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
    float w;

    for (i = 0; i < n; i++) {
        scanf("%d", &students[i].roll);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].marks);
    }
    scanf("%f" , &w);
    int c = 0;

    for (i = 0; i <= n; i++) {
        if (students[i].marks > w) {
            c++;
        }
    }
   
        printf("Count of students scoring above %.2f: %d" , w , c);
    
 


    return 0;
}