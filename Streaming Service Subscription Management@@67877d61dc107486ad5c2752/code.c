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
    int b =0 ; int p =0; int s =0;

    for (i = 0; i < n; i++) {
        scanf("%s", students[i].roll);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].salary);
        if (strcmp(students[i].name, "Basic") == 0) {
            b++;
            x+= students[i].salary;
        }
        else if (strcmp(students[i].name, "Premium") == 0){
            p++;
            y+= students[i].salary;
        }
        else if (strcmp(students[i].name, "Standard") == 0){
            s++;
           z+= students[i].salary;
        }
     

    }
        printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f",b, x,s,z ,p,y );
     

    return 0;
}