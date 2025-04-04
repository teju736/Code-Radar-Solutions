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

    struct Student students[n], topStudent;
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &students[i].roll);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].marks);
       
    }

 
    topStudent = students[0];

    for (i = 1; i < n; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }


    printf("Top Scorer: ");
    printf("Roll Number: %d, ", topStudent.roll);
    printf("Name: %s, ", topStudent.name);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}