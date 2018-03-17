    #include<stdio.h>


    int main(){

            int i, n,j ;
        printf("Enter the number: ");
            scanf("%d",&n);
            for(j = 1; j<=n; j++){
            for(i=2; i<j; i++){
            if(j%i==0)

                break;
            }

            if(j==i)
                printf("%d\n",j);


}

        return 0;
    }
