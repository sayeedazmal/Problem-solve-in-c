

#include<stdio.h>
#include<string.h>
#define NULL 0
int main(void)
{
    int i = 0,j;
    const int numOfStrings = 128;
    char* strArray[numOfStrings];
    char writablestring[]= "The C Programming Language";
    char *token = strtok(writablestring, " ");

    for(j = 0; j < numOfStrings; j++ )
    {
        strArray[j] = new char[40];
    }

    while(token != NULL)
    {
        strcpy(strArray[i], token);
        printf("[%s]\n", token);
        token = strtok(NULL, " ");
        i++;
    }
    return 0;
}
