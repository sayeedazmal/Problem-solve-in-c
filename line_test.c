#include <stdio.h>
#include <string.h>

int main(void) {
 int i, k,j, len, count, isNumber;
 int line_no,countlin[100];
 char charArray[1000];



 scanf("%d\n", &line_no);

 for(k = 0; k < line_no; k++){
 i = 0;
 len = 0;
 count = 0;
 isNumber = 0;

 gets (charArray);
 len = strlen(charArray);

 for(i = 0; i < len; i++){
  if (charArray[i] != ' '){
   if(isNumber == 0){
   isNumber = 1;
    count++;
   }
  }

  if(charArray[i] == ' '){
   isNumber = 0;
  }

  if(charArray[i] == "\n"){
   break;
  }
   }

 countlin [k] = count;
 }
 printf("\n");
 for(j=0;j<4;j++){
    printf("%d\n", countlin[j]);
 }
 return 0;
}
