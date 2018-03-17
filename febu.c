
#include<stdio.h>


    int main(){

    int first_number=0, second_number=1,third_number,loop,n;


        scanf("%d",&n);
        for(loop =0; loop<n ;loop++){
              third_number = first_number+second_number;
             first_number = second_number;
             second_number =third_number;
             printf("%d: %d\n",loop,third_number);

        }

    }
