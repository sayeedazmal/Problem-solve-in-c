    #include<stdio.h>



        int main(){

        int rem,result=0, div,n,number,reverse=0;
        scanf("%d",&n);
            number = n;
            while(number!=0){
            rem=number%10;
            div = number/10;
            reverse= reverse*10+rem;
            number = div;
        }
        if(n==reverse){
            printf("this pallendrom number");
        }
        else{
            printf("this is not pallendrom number");

        }


        return 0;
        }
