#include <stdio.h>
#include <string.h>
void string_copy(char des[], char src[]);
int main(){
    char des[10];
    string_copy(des, "ABC");
    printf("%s\n", des);
  
    strcpy(des, "ABCDE");// from string.h
    printf("%s\n", des);
return 0;
}

void string_copy(char des[], char src[]){

    int i = 0 ;
    while(src[i] != '\0'){
        des[i] = src[i];
        i++;
    }
    des[i] = '\0';
}