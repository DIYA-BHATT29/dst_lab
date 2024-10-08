#include<stdio.h>
void sparse(int A[10][10], int m,int n)
{
int i,j,k=1,S[10][10];
S[0][0]=m; 
S[0][1]=n;
for (i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(A[i][j]!=0)
{
S[k][0]=i;
S[k][1]=j;
S[k][2]=A[i][j];
k++;
}
}
}
S[0][2]=k-1,
printf("tuple form:\n");
for(i=0;i<S[0][2]+1;i++)
{
for (j=0;j<3;j++)
{
printf("%d\t",S[i][j]);
}
printf("\n");
    }
}
void main()
{
int i,j,A[10][10],m,n;
printf("number of rows and coloumns of matrix:");
scanf("%d%d",&m,&n);
printf("enter the matrix");
for (i=0;i<m;i++) 
for (j=0;j<n;j++)
scanf("%d",&A[i][j]);
for (i=0;i<m;i++)
for (j=0;j<n;j++)
printf("%d\t",A[i][j]);
printf("\n"),
sparse(A,m,n);
}