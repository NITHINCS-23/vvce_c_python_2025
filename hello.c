#include<stdio.h>
int main()
{
    int N=10,k=5,n;
    printf("input");
    scanf("%d",&n);
    if (n>N||n<=0)
        {
        printf("invalid input");
        printf("\n number of candies remaining %d",N);
    }
        else{
        printf("number of candies sold %d",n);
        if(N-n<=k){
            N=10;
            printf("\n number of candies remaining %d",N);
        }
        else{
        printf("\n number of candies remaining %d",N-n);
    }
}
return 0;
}