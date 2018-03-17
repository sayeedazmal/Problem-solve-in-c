
#include <stdio.h>
#include<string.h>
int main()
{



    char str[100];
    int i,len,flag=0;
    scanf("%s",str);
    len = strlen(str);
    for(i = 0; i<=len; i++){
            if( str[i]!=str[len-i-1]){
                flag = 1;
                break;
            }
            else{
                flag=0;
            }

        }

    if(flag==0){
    printf("yes \n");
    }
    return 0;
}
