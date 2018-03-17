#include <stdio.h>

int main()
{
    int i, n, first_num,second_num,divisor,count=0;

    scanf("%d %d %d",&first_num,&second_num,&divisor);
    for(i = first_num; i<=second_num; i++){
    if(i%divisor==0){
        count++;
    }

    }
    printf("%d\n",count);
    return 0;
}

