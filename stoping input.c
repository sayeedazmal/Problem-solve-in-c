    #include<stdio.h>

    int main(){

            int i,number;
            while(1){
                scanf("%d",&number);
                if(number==42){
                    break;
                }
                else{
                   printf("%d\n",number);
                }
            }
        return 0;
    }
