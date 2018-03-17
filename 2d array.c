    #include <math.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <assert.h>
    #include <limits.h>
    #include <stdbool.h>

    int main(){
        int arr[6][6], i, j, colum_sum[6], colum_max, row_max=-9999, row_maxvalue[6], arr_i, arr_j,sum ;
        for( arr_i = 0; arr_i < 6; arr_i++){
           for( arr_j = 0; arr_j < 6; arr_j++){
              scanf("%d",&arr[arr_i][arr_j]);
           }
        }


     for(i = 0; i<4; i++){

            colum_max= -9999;
        for(j=0; j<4; j++){
                sum =0;

                sum+=arr[i][j]+arr[i][j+1]+arr[i][j+2];
                sum+= arr[i+1][j+1];
                sum+= arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                colum_sum[j] = sum;
                //printf("%d", colum_sum[j]);
                 if(colum_max<=colum_sum[j]){
                        colum_max = colum_sum[j];
                 }
            }

                row_maxvalue[i]=colum_max;

                if(row_max<row_maxvalue[i]){
                row_max = row_maxvalue[i];

                }

        }

        printf("%d", row_max);
        return 0;
    }
