    #include<stdio.h>
    #include<string.h>

        int main(){
        int first_out=-1, second_out=-1;
            char first_part[2],second_part[2],input_str[10],third_part[2],fourth_part[2];

            gets(input_str);

            first_part[0] = input_str[0];
            first_part[1] = input_str[1];

            second_part[0] = input_str[3];
            second_part[1] = input_str[4];

         if(first_part[0] == second_part[0] || first_part[0] == second_part[1]){
                third_part[0]=first_part[0];
          sscanf(third_part, "%d", &first_out);
         }

         if(first_part[1] == second_part[0] || first_part[1] == second_part[1]){
            fourth_part[1]= first_part[1];
          sscanf(fourth_part, "%d", &second_out);
         }

         //two output
         if(first_out >-1 && second_out >-1){
          if(first_out == second_out){
           printf("%d\n", first_out);

          }else if(first_out > second_out){
           printf("%d%d\n", second_out, first_out);
          }else{
           printf("%d%d\n", first_out, second_out);
          }

         }//one output
         else if(first_out >-1 ){
          printf("%d\n", first_out);

         }else if (second_out >-1 ){
          printf("%d\n", second_out);
        }//no output
         else{
          printf("N");
         }
         return 0;
        }


