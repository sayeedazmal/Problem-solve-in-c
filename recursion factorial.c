
    #include<stdio.h>


   int fact(int n){

        if(n==1){
            return 1;
        }
        if(n==0){
            return 1;
        }

        return n*fact(n-1);

    }

        int main(){

            int fact_number, i;
            printf("Enter input factorial number = ");
            scanf("%d", &fact_number);
            printf("\n the factorial number %d is = %d\n", fact_number, fact(fact_number));
            return 0;
        }


