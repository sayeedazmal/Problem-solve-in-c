                #include <math.h>
                #include <stdio.h>
                #include <string.h>
                #include <stdlib.h>
                #include <assert.h>
                #include <limits.h>
                #include <stdbool.h>

                int main(){
                    long long n;
                    int remander,one=0,test = 0,i;
                    scanf("%lld",&n);
                    int arr[n];
                    while(n>0){
                        remander = n%2;
                        arr[n]=remander;
                        n= n/2;
                        test++;
                    }
                    for(i = 1; i<=test; i++){
                        if(arr[i]==1){
                            one++;

                    }
                    }
                    printf("%d",one);


                    return 0;
                }
