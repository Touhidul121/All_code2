#include<stdio.h>
#include<stdlib.h>
int A[10][10],B[10][10];
int *res[10];
int r1,c1,r2,c2;
int** multiply(int A[10][10],int B[10][10])
{

          int i,j,k;
     for(i = 0; i < r1; ++i){
        for(j = 0; j < c2; ++j){
                res[i][j]=0;
            for(k = 0; k < c1; ++k)
            {
                res[i][j] += A[i][k] * B[k][j];
            }

        }
     }
return res;
}

int main()
{
  //int r1,c1,r2,c2;
  printf("Give row and column no for A:\n");
  scanf("%d %d",&r1,&c1);

  printf("Give row and column no for B:\n");
  scanf("%d %d",&r2,&c2);


for(int i=0;i<r1;i++)
{
    res[i]=(int*)malloc(c2*sizeof(int));
}
printf("Give input for A:\n");
  for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
        scanf("%d",&A[i][j]);

printf("Give input for B:\n");
  for(int i=0;i<r2;i++)
      for(int j=0;j<c2;j++)
      scanf("%d",&B[i][j]);

  int **arr=multiply(A,A);

int res1[r1][c2];
for(int i=0;i<r1;i++)
{
    for(int j=0;j<c2;j++)
    {
      res1[i][j]=0;
      for(int k=0;k<c1;k++)
      {
          res1[i][j]+=arr[i][k]*A[k][j];
      }
    }

}

printf("Result of 1->i (A^3):\n");

for(int i=0;i<r1;i++)
{
    for(int j=0;j<c2;j++)
    {
        printf("%d ",res1[i][j]);
    }
    printf("\n");
}

printf("\n");
int **arr1=multiply(A,B);

printf("Result of 1-> ii(AB):\n");
for(int i=0;i<r1;i++)
{
    for(int j=0;j<c2;j++)
    {
        printf("%d ",arr1[i][j]);
    }
    printf("\n");
}
printf("\n");
printf("Result of 1-> iii(A^3+AB-2B):\n");

int res2[10][10];

for(int i=0;i<r1;i++)
{

    for(int j=0;j<c2;j++)
    {
     res2[i][j]=res1[i][j]+arr1[i][j]-(2*B[i][j]);
    }

}
for(int i=0;i<r1;i++)
{
    for(int j=0;j<c2;j++)
    {
        printf("%d ",res2[i][j]);
    }
    printf("\n");
}
}
