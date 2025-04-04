// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    char s2[100];
    fgets(s,sizeof(s),stdin);
    for(int i=0;i<strlen(s);i++){
        if(s[i]!=' '){
            char temp[2];
            temp[0]=s[i];
            temp[1]='\0';
            strcat(s2,temp);
        }   
    }
    printf("%s",s2);
    for(int i=0;i<strlen(s2);i++){
        if(s2[i]!=s2[strlen(s2)-i-1]){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}