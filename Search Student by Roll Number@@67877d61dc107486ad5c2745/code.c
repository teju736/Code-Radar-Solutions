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
    int w;

    for (i = 0; i < n; i++) {
        scanf("%d", &students[i].roll);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].marks);
    }
    scanf("%d" , &w);
    int c = 0;

    for (i = 0; i <= n; i++) {
        if (students[i].roll == w) {
            theStudent = students[i];
            c++;

        }
    }
    if(c==0){
        printf("Student not found");
    }
    else{

    printf("Roll Number: %d, ", theStudent.roll);
    printf("Name: %s, ", theStudent.name);
    printf("Marks: %.2f \n", theStudent.marks);
    }


    return 0;
}