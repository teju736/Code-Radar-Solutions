#include <stdio.h>
#include <ctype.h>

int main() {
    char i;
    scanf("%c",i);
   if(isdigit(i)){
    printf("Digit");
   }else if(isalpha(i)){
    i=tolower(i);
    if(i=='a'||i=='e'||i=='i'||i='o'||i='u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
   }else{
    printf("Special Character")
   }

    return 0;
}



    

