#include<stdio.h>


int main(){

    int i,n,number[100],sum,j;

    int avg,number1[100];;
    scanf("%d",&n);
    for(j=0;j<n;j++){
            sum=0;
    for(i=0;i<5;i++){
        scanf("%d",&number[i]);
    }

    for(i=0;i<5;i++){
        sum+=number[i];
        avg=sum/5;
    }
    number1[j]=avg;
}
    for(i=0;i<n;i++){
        printf("%d\n",number1[i]);
    }

    return 0;
}

