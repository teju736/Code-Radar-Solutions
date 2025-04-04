#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Book books[n];
    int i;
    float w;

    for (i = 0; i < n; i++) {
        scanf("%s", books[i].title);
        scanf("%s", books[i].author);
        scanf("%f", &books[i].price);
    }
    scanf("%f" , &w);
   
 printf("Books above price %.2f:\n" , w);
    for (i = 0; i < n; i++) {
        if (books[i].price > w) { 
        printf("Title: %s, Author: %s, Price: %.2f\n" , books[i].title , books[i].author , books[i].price);
        }
    }
   
    
 


    return 0;
}