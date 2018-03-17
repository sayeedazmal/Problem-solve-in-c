    #include<stdio.h>
    int main(){

    int i,j,n,max = 0,min = 100,maxN[100],minN[100];

    int arr[100]={1,2,6,9,10};

    for(i = 0; i<2; i++){

        for(i=0 ; i<5; i++){
        scanf("%d",&arr[i]);
    }

    for(i = 0; i<5; i++){
        if(max<=arr[i])
            max=arr[i];

        if(arr[i]<=min)
            min = arr[i];

    }
    maxN[i] = max;
    minN[i+1] = min;
    }
    for(i = 0;i<2; i++){
    printf("%d %d\n",maxN[i],minN[i+1]);
    }
    return 0;
    }







