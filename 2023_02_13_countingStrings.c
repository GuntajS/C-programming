/*#include <stdio.h>
#include <string.h>

int stringcount(char myString[]){
    int i=0;
    char temp='a';
    while(temp!= '\0')
    {
        temp = myString[i];
        i++;
    }
    return i-1;
}

void catstr(char result[],char str1[],char str2[])
{   
    char temp= 'a';
    strcpy(result,str1);
    int j=0;
    int i=strlen(str1)+1;
    while(i<=(strlen(str1)+strlen(str2)-1))
    {
        //if(temp!='\0')
        result[i] = str2[j];
        j++;
        i++;
    }

    printf("\nThe concatenated string is %s",result);
}

void main(){
    char myString[] = "123456789";
    printf("The length of the string is %d",stringcount(myString));  
    char result[100],str1[]="Hello ",str2[]="world";
    catstr(result,str1,str2);   
}*/