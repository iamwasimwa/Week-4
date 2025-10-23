#include<stdio.h>
#include<string.h>
int main(){
    char string1[]="Wasim ";
    char string2[]="Akram";
    strcat(string1,string2);
    printf("string after append->%s",string1);
}
