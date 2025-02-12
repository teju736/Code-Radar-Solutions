#include <stdio.h>
#include <ctype.h>

int main() {
    char i;
    scanf("%c",i);
    if (isdigit(i)) {
        printf("Digit\n");
    }
    else if (isalpha(i)) {
        i = tolower(i); 

        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    else {
        printf("Special Character\n");
    }

    return 0;
}



    

