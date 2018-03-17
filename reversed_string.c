#include <stdio.h>

int main()
{
    int n;
    long long int product=1;

    scanf("%d",&n);
    int arr[n];
    while(n--){
        scanf("%d",&arr[n]);
        product*=arr[n];
    }
    printf("%d",product);
    return 0;
}
