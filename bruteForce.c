#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int bruteForce(char *mainString,char *subString, int mainStrLen, int subStrLen){
    int i, j;
    for (i = 0; i <= mainStrLen - subStrLen;i++){
        for (j = 0; j < subStrLen; j++){
            if(mainString[i+j]!=subString[j])
                break;
        }
        if (j==subStrLen)
            return i;
    }
    return -1;
}

int main(){
    char mainString[100], subString[100];
    printf("Enter the main String:");
    scanf("%s", mainString);
    printf("Enter the subString:");
    scanf("%s", subString);
    printf("%d", bruteForce(mainString, subString, strlen(mainString), strlen(subString)));
    return 0;
}