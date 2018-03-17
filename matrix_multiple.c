#include<stdio.h>


    int main(){

        int n,r1,r2,c1,c2,i,j,k;

        printf("Enter the first row and colum:\n");
        scanf("%d%d",&r1,&c1);

        printf("Enter the second row and colum:\n");
        scanf("%d%d",&r2,&c2);
        int c[r1][r2],a[r1][c1],b[r2][c2];


                printf("Enter the first Array:\n");
                for(i = 0; i<r1; i++){
                    for(j = 0; j<r2; j++){
                    scanf("%d",&a[i][j]);
                    }
                }

                printf("Enter the second Array:\n");
                for(i = 0; i<r1; i++){
                    for(j = 0; j<r2; j++){
                    scanf("%d",&b[i][j]);
                    }
                }
                        n = r1;
                        for(i =0; i<n; i++){
                            for(j =0; j<n; j++){
                                c[i][j] = 0;
                                for(k =0; k<n; k++){
                                    c[i][j] = c[i][j]+a[i][k]*b[k][j];
                                }
                            }

                        }

                        printf("Display the new matrix ");
                                for(i = 0; i<n; i++){
                                for(j = 0; j<n; j++){
                                printf("%d",c[i][j]);
                    }
                    printf("\n");
                }


    }
