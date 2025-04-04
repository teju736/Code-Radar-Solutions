#include <stdio.h>
float ar(int length , int  breath){
    float ty = length*breath;
   return ty;
}
float pr(int length , int breath){
    float s = length + breath;
    float ui = 2*s;
    return ui ;
}
int main() {
    int n, length , breath;
    float area , p;
    scanf("%d" , &n);
     for(int i =1 ; i<=n ; i++){
         scanf("%d" , &length);
         scanf("%d" , &breath);
         area= ar(length , breath);
         p= pr(length , breath);
         printf("Rectangle %d: Area = %.2f, Perimeter = %.2f \n" , i  , area , p);

     }
    
    return 0;
}