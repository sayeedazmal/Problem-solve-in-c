

    #include<stdio.h>
    #include<string.h>

    int main(){

            int n;
        int i,j,count=0,len,flag=0;
        scanf("%d\n",&n);
        char ch[n];

        for(j = 0; j<n; j++){

        gets(ch);
        len = strlen(ch);
        count =0;
        for(i = 4; i<len; i++){

            if(ch[i]=='a'||ch[i]=='A'||ch[i]=='e'||ch[i]=='E'||ch[i]=='o'||ch[i]=='O'||ch[i]=='i'||ch[i]=='I'||ch[i]=='u'||ch[i]=='U'){
                flag = 0;
            }
            else{
                count++;
            }
        }
        printf("%d/%d\n", count+1, len);
    }
        return 0;

    }
