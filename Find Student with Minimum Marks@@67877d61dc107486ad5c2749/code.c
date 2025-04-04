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

    struct Student students[n], tStudent;
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &students[i].roll);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].marks);
       
    }

 
    tStudent = students[0];

    for (i = 1; i < n; i++) {
        if (students[i].marks < tStudent.marks) {
            tStudent = students[i];
        }
    }


    printf("Student with Minimum Marks: ");
    printf("Roll Number: %d, ", tStudent.roll);
    printf("Name: %s, ", tStudent.name);
    printf("Marks: %.2f\n", tStudent.marks);

    return 0;
}