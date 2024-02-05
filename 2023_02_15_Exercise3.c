/*#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void bubbleSort();

int main(){
    char str3[10] = "abc";
    char str2[20] = "dEf";
    char str1[20] = "abC";
    bubbleSort(str1,str2,str3);
    printf("The order is now:\n\n\t%s\n\t%s\n\t%s\n",str1,str2,str3);
    return 0;
}

void bubbleSort(char str1[],char str2[],char str3[]){
    char temp[100];
    bool endLoop = false;
    while(!endLoop){
        if(strcmp(str1,str2)>0)
        {
            strcpy(temp,str1);
            strcpy(str1,str2);
            strcpy(str2,temp);
            if(strcmp(str2,str3)>0){
                strcpy(temp,str2);
                strcpy(str2,str3);
                strcpy(str3,temp);
            }
        }
        else if(strcmp(str2,str3)>0){
                strcpy(temp,str2);
                strcpy(str2,str3);
                strcpy(str3,temp);
            }
        else{
            endLoop = true;
        }
    }
}*/