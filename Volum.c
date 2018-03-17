#include<stdio.h>
#include<math.h>
int main(){
    int i,lin_no,j;
    float volume=1,length,width,hight,result[100];

    scanf("%d",&lin_no);
    for(i=0;i<lin_no;i++){
        scanf("%f%f%f",&length,&width,&hight);
        volume = length*width*hight;
        result[i] = volume;

    }
    printf("\n");
    for(j=0;j<lin_no;j++){
        printf("%.0f\n",result[j]);
    }
    return 0 ;
}
