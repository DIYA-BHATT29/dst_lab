#include <stdio.h>
int S[10][10],T[10][10];
void Sparse(int A[10][10],int m,int n)
{
    int i,j,k=1;
    S[0][0]=m; S[0][1]=n;
    for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
 if (A[i][j]!=0)
{
S[k][0]=i;
S[k][1]=j;
S[k][2]=A[i][j];
}
}
}
S[0][2]=k-1;
printf("\nTuple Form:\n");
for(i=0;i<=S[0][2];i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",S[i][j]);

    }
    printf("\n");
}
}
void main()
{
    int i,j,A[10][10],m,n;
    printf("enter num of rows and columns:");
    scanf("%d%d,&m,&n");
    printf("enter the matrix:");
    for(i=0;i<m;i++)
     for(j=0;j<n;j++)
      scanf("%d",&A[i][j]); }
      void Transpose()
      {int m,n,k,i,j;
      T[0][0]=S[0][1];   T[0][1]=S[0][0]; T[0][2]=S[0][2];
      k=1;
      m=S[0][1]; n=S[0][2];
       for(i=0;i<m;i++)
          { for(j=1;j<=n;j++)
      {if(S[j][1]==i)
      {T[k][0]=S[j][1];
      T[k][1]=S[j][0];
      T[k][2]=S[j][2];
      k=k+1;       
      } 
      }
      }
      }
