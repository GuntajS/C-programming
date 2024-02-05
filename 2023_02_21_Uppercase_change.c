#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    FILE *fp1,*fp2;
    int c;

    fp1 = fopen("challenge2.txt","r");
    fp2 = fopen("temp.txt","w");
    if(fp1==NULL || fp2==NULL){
        perror("Error in opening file");
        return(-1);
    }

    while((c=fgetc(fp1))!=EOF)
    {
        if(islower(c)!=0){
            fputc(c-32,fp2);
        }
        else{
            fputc(c,fp2);
        }
    }


    fclose(fp1);
    fp1==NULL;
    fclose(fp2);
    fp2=NULL;

    remove("Challenge2.txt");
    if(rename("C:\\Users\\gunta\\OneDrive\\Documents\\Mandeep-US\\Extracurricular\\C programing\\vscode\\temp.txt", "C:\\Users\\gunta\\OneDrive\\Documents\\Mandeep-US\\Extracurricular\\C programing\\vscode\\challenge2.txt")) 
        printf("Failed to rename file."); 
    else
        printf("File renamed successfully.");
}