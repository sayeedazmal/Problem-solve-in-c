        #include<stdio.h>

         int main(){

            int T,A,N,i,c,j;
            scanf("%d",&T);

            for(j =0; j<T; j++){

            scanf("%d%d",&A,&N);

                c = A;
            for(i = 0; i<N; i++){
              scanf("%d",&Arr[i]);
            }

            for(i = 0; i<A; i++){

                if(Arr[i]==0){

                 c = c-1;
                }

                if(Arr[i]==1){
                    c = c+3-1;
            }
         }

         if(c==0){
            printf("No %d\n",A);
         }
         else{
            printf("yes %d\n",c);
         }

         }

         return 0;
    }

