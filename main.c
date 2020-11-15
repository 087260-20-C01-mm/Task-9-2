#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n,m,i,k=1,n0=0,m0=0;
    printf("Enter n and m\n");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("\n");

while(n0<=n/2 && m0<=m/2){
        for(i=m0;i<=m-1-m0 && k<=m*n;i++)
        {

            a[n0][i]=k;
            k++;
        }

        for(i=1+n0;i<=n-1-n0 && k<=m*n;i++)
        {

            a[i][m-1-m0]=k;
            k++;
        }
        for(i=m-2-m0;i>=m0 && k<=m*n;i--)
        {

            a[n-1-n0][i]=k;
            k++;
        }
        for(i=n-2-n0;i>=1+n0 && k<=m*n;i--)
        {

            a[i][m0]=k;
            k++;
        }
        if(k>m*n){break;}
m0++;n0++;
    }

    for(i=0;i<=m*n-1;i++) {
            if((i-1)/m<i/m){printf("\n");}
            printf("%4d ",a[i/m][i%m]);}

printf("\n\n\n");
printf("Enter n and m\n");
    scanf("%d %d",&n,&m);
    printf("\n");
int j;
int b[n][m];
for(i=0;i<=n-1;i++){
for(j=0;j<=m-1;j++)
{b[i][j]=abs(i-j)+1;}
}

for(i=0;i<=n*m-1;i++){if((i-1)/m<i/m){ printf("\n"); }; printf("%d ", b[i/m][i%m]); }

    return 0;
}
