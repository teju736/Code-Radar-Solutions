#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float salary;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n], theStudent;
    int i;
    float b;

    for (i = 1; i <= n; i++) {
        scanf("%d", &students[i].roll);
        scanf("%s", &students[i].name);
        scanf("%f", &students[i].salary);
          if (students[i].salary < 50000) {
            b= students[i].salary*(0.1);
        }
        else{
            b= students[i].salary*(0.05);
        }
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", students[i].roll ,students[i].name,b );

    }
     

    return 0;
}