#include<stdio.h>




    int main(){

        int month[3],i,tot_num[3],num=0,temp,j;

                for(i = 0; i<3; i++){
                    scanf("%d",&month[i]);
                }
                    for(j = 0; j<3; j++){
                        tot_num[j] = 10*month[j];

                            if(tot_num[j]>100){
                                temp=100;
                                num+=temp;
                            }
                        if(tot_num[j]<=100){
                              temp = tot_num[j];
                               num+= temp;
                    }
                }
               printf("%d\n",num);

            return 0;
     }
