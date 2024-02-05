/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int length;
    char *pString=NULL;
    printf("how long is your string?");
    scanf("%d",&length);
    pString = (char * )malloc(length * sizeof(char));
    if (pString != NULL){
        printf("\nPlease enter a text string: \n");
        scanf("%s",pString);

        
        printf("\nThe chosen string is: %s", pString);
    }
    
    free(pString);
    pString=NULL;
    return 0;
}
*/