    #include<stdio.h>
    int main(){

    float arr[100],sum,avg,num[100];
    int i=0,j,p,n;

    scanf("%d",&p);
    for(i=0;i<p;i++){
        sum = 0.0;
        scanf("%d",&n);
        for(j = 0; j<n; j++){
        scanf("%f",&arr[j]);
        sum+=arr[j];
        }
            avg = sum/n;
            num[i]=avg;
        }
         for(j=0;j<p;j++){
            printf("%.2f\n", num[j]);
        }
    return 0;

    }
