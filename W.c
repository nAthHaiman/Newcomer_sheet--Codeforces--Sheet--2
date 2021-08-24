#include<stdio.h>
     
    int main()
    {
        int n,i,j,k=1;
        scanf("%d",&n);
        int m,s=n-1;
        int b=((2*n)/2)+1;
     
        for(i=1;i<=2*n;i++){
            if(i<b){
            for(m=0;m<s;m++)
                    printf(" ");
            for(j=0;j<k;j++){
                printf("*");
            }
            k=k+2;
            s=s-1;
     
            printf("\n");
     
        }
        else{
            k=k-2;
            s=s+1;
            for(m=0;m<s;m++)
                    printf(" ");
            for(j=0;j<k;j++){
                printf("*");
     
            }
             printf("\n");
        }
    }
     
     
     
        return 0;
     
    }
