        #include<stdio.h>
        #include<string.h>



        int main(){

        int i=0, j, n,num[100],len,count;
        char str[100];

        fgets(str,100,stdin);
        len = strlen(str);

        //printf("%d",len);
        for(i=0; i<len; i++){
         num[i] = atoi(str[i]);
        //printf("%d\n",num[i]);
        if(num[i]==0){
            count=0;
        }
        if(num[i]==1){
            count = 1;
        }
     }
            if(count = 0){
            printf("magic");
            }
            if(count = 1){
            printf("Normal");
            }

        return 0;
 }
