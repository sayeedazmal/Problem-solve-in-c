
    #include <stdio.h>

    int main(void) {
     char str[50];
        int loop, len, line, str_len, j;
           gets(str);
        sscanf(str, "%d", &len);
        //output string array
        char out_str[len+1][50];

        for(line = 0; line < len   ; line++){
              loop = 0;
              str_len = 0;

      //entering new input string
              gets(str);
              str_len = strlen(str);
              out_str[line][loop]=0;

      //processing each input line
          while(loop!= str_len){
           if(str[loop]=='L'){
               out_str[line][loop] = str[loop-1];
           }
           else if (str[loop]=='R'){
               out_str[line][loop] = str[loop+1];
           }
           else{
            out_str[line][loop] = str[loop];
           }
           loop++;
          }

         }

         //displaying output
         for(line = 0; line < len ; line++){
           printf("%s", out_str[line]);
            printf("\n");

         }

         return 0;
    }
