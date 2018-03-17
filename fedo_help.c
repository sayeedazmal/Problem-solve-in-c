    #include <stdio.h>

    int main()
    {

        int N,i,old_arr,new_arr,n,c;
        scanf("%d",&N);
        int A[N];

        for(i = 0; i<N; i++){
            scanf("%d",&A[i]);
        }

        n = A[0];
        while(n!=0){
            new_arr = n;
            old_arr = A[0];
            for(i = 1; i<N; i++){
            old_arr*= A[i];
            new_arr*= n;
            }

            if(new_arr>old_arr){
                printf("%d\n",n);
            }
            else{
                c = 0;
            }
            n--;
        }

        return 0;
    }

