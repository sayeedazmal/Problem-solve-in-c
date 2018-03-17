       #include<stdio.h>
       #include<string.h>

        int main(){

         char str[100],ar[100][100];
         int loop,len, line,i;


        //take input in the array element
         for(line = 0; line<3 ; line++){
                i = 0;
           ar[line][i]=gets(str);
            //len[line] = strlen(a);
         }
        for(line = 0 ; line<3; line++){
                len = 0;
                i =0;
                loop = 0;
            len = strlen(ar[line][i]);

          while(loop!=len){
                  if(ar[loop]=='L'){
                   ar[loop] = ar[loop-1];
            }
               else if (ar[loop]=='R'){
                  ar[loop]=ar[loop+1];
            }
        loop++;
        }
           for(loop = 0 ; loop<len; loop++){
            printf("%c",ar[loop]);
           }
            printf("\n");
            }
            return 0;
   }
