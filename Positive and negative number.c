#include <stdio.h>
int main(){
int n,i,countP=0 , countN=0, number ;

scanf("%d",&number);
for(i=0;i<number;i++){
scanf("%d",&n);


    if(0<n)
        countP++;

        else
        countN++;
}

    printf("\n%d %d",countP,countN);


return 0;

}
