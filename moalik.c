    #include<stdio.h>
    #include<string.h>

        int main(){

            int i, n,count=0,j;

            scanf("%d",&n);
            for(j = 2; j<n; j++){
            for(i = j; i<=n; i++){
                n = n/j;

                count++;
            }
        }

        }

