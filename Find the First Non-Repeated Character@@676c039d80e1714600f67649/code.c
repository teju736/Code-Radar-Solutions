#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str) , stdin);
    int n = strlen(str);
    int c = 0;
    int b = 0;
    for(int i = 0 ; i<n ; i++){
        c=0;
        for(int j = 0 ; j<n ; j++){
            if(i!=j && str[i]==str[j]){
                c=1;
                break;
            }
           
        }
        if(c==0){
            b++;
            printf("%c" , str[i]);
            return 0;
        }
    }
    if(b==0){
         printf("-");
    }
}


// char f(char str[]) {
//     int i, j;
//     int fe;
    
//     for (i = 0; str[i] != '\0'; i++) {
//         fe = 0;
//         for (j = 0; str[j] != '\0'; j++) {
//             if (i != j && str[i] == str[j]) { 
//                 fe = 1;
//                 break;
//             }
//         }

//         if (!fe) {
//             return str[i];  
//         }
//     }
    
//     return '\0'; 
// }

// int main() {
//     char str[100];
//     fgets(str, sizeof(str) , stdin);
    
//     char result = f(str);
    
//     if (result != '\0') {
//         printf("%c", result);
//     } else {
//         printf("-");
//     }

//     return 0;
// }