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

    struct Student students[n];
    int i;


    for (i = 0; i < n; i++) {
        scanf("%d", &students[i].roll);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].marks);
    }



     for (i = 0; i < n; i++) {
        if (students[i].marks >= 85) {
               printf("Roll Number: %d, Name: %s, Grade: A\n" ,students[i].roll, students[i].name );
        }
        else if(students[i].marks >=70){
            printf("Roll Number: %d, Name: %s, Grade: B\n" ,students[i].roll, students[i].name );
        }
        else if(students[i].marks <70){
          printf("Roll Number: %d, Name: %s, Grade: C\n" ,students[i].roll, students[i].name );
         }
     }

        

    return 0;
}