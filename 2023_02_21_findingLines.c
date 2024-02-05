/*#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int c,count=1;

    fp = fopen("challenge1.txt","r");
    if(fp==NULL){
        perror("Error in opening given file");
        return(-1);
    }

    while((c=fgetc(fp))!=EOF)
    {
        if(c=='\n'){
            count++;
        }
    }
    printf("The number of lines in the file is %d",count);

    fclose(fp);
    fp=NULL;
}*/