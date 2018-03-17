#include<stdio.h>
#include<string.h>

int main()
{
    char charArray[100];
    int len,result,i,n,j,value[100],number[100];
    scanf("%d\n",&n);
    for(j=0;j<n;j++){

    result = 0;
    gets(charArray);
    len=strlen(charArray);

    for(i=0;i<len;i++){
            if(charArray[i]=='\n'){
                break;
            }
        result+=charArray[i];
    }
    value[j] = result;
}
printf("\n");
for(j = 0;j<n; j++){
    printf("%d\n", value[j]);
}
return 0;
}
