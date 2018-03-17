        #include<stdio.h>


            int main(){


                int i, j, n=0, fact=1,fc,p=0,count=0,flag=0;

                scanf("%d",&n);
                while(n!=0){
                fact*=n;
                n--;
                }
                fc= fact;
                while(fc!=0){
                    fc /=10;
                    p++;
                }

                int num[p];
                j = 0;

                while(fc!=0){
                    num[j]=fc%10;
                    fc /=10;
                    j++;
                }


                for(i = 0; i<j-1; i++){
                if(num[i]==0){
                  count++;
                }
            }
            printf("%d",count);


               return 0;

            }
