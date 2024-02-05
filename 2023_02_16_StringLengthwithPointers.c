/*#include <stdio.h>
#include <string.h>

int stringlength(char myString[]);

int main(){
    char myString1[]="Helloworld";
    printf("The length of the string is %d",stringlength(myString1));
    return 0;
}

int stringlength(char myString[]){
    char *strPointer = myString;
    void *initial = strPointer,*last;
    int length;
    while(*strPointer!='\0'){
        ++strPointer;
    }
    last=strPointer;
    length = last - initial;
    return length;
    
}*/