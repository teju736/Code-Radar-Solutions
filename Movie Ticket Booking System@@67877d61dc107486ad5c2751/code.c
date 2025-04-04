#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char roll[200];
    float salary;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n], theStudent;
    int i;
    float x = 0.00;
    float y = 0.00;
    float z = 0.00;

    for (i = 0; i < n; i++) {
        scanf("%s", students[i].roll);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].salary);
        if (strcmp(students[i].name, "Standard") == 0) {
            
            x+= students[i].salary;
        }
        else if (strcmp(students[i].name, "Premium") == 0){
            y+= students[i].salary;
        }
        else if (strcmp(students[i].name, "VIP") == 0){
           z+= students[i].salary;
        }
     

    }
        printf("Standard: %.2f, Premium: %.2f, VIP: %.2f\n", x ,y,z );
     

    return 0;
}