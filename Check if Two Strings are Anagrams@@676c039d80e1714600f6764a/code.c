#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str1[100];
    char str2[100];
    scanf("%s" , &str1);
    scanf("%s" , &str2);
    int n = strlen(str1);
    int y = strlen(str2);

    if(n!=y){
        printf("No");
        return 0;
     }
     else{
      int sum1 = 0;
      int sum2 = 0;
      for(int i = 0 ; i<n ; i++){
        sum1+= (int)str1[i];
        sum2 += (int)str2[i];
      }
      if(sum1 == sum2){
        printf("Yes");
      }
      else{
        printf("No");
      }
     }

   
}