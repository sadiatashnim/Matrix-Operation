#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int R1,R2,C1,C2,i,j,k,sum=0;

  printf("Enter rows and cols for A matrix:");
  scanf("%d%d",&R1,&C1);

  printf("Enter rows and cols for B matrix:");
  scanf("%d%d",&R2,&C2);

  while(C1!=R2)
  {
      printf("Error!!! cols of A matrix is not equal for rows of B matrix.");

      printf("Enter rows and cols for A matrix:");
      scanf("%d%d",&R1,&C1);

      printf("Enter rows and cols for B matrix.");
      scanf("%d%d",&R2,&C2);

  }


 // taking input for A matrix

      printf("\nEnter elements for A matrix.\n");
      for(i=0;i<R1;i++)
      {
          for(j=0;j<C1;j++)
          {
              printf("A[%d][%d]= ",i,j);
              scanf("%d",&A[i][j]);

          }
          printf("\n");
      }

    //  taking input for B matrix

       printf("\nEnter elements for B matrix.\n");
       for(i=0;i<R2;i++)
       {
           for(j=0;j<C2;j++)
           {
               printf("B[%d][%d]= ",i,j);
               scanf("%d",&B[i][j]);
           }
           printf("\n");
       }

       //printing A matrix
       printf("\nA=");

       for(i=0;i<R1;i++)
       {
         printf("\t");
           for(j=0;j<C1;j++)
           {
               printf("%d ",A[i][j]);
           }
           printf("\n");
       }
      // printing B matrix

      printf("\nB=");

      for(i=0;i<R2; i++)
      {
          printf("\t");
          for(j=0;j<C2;j++)
          {
              printf("%d ",B[i][j]);

          }

             printf("\n");
        }

       // multipling A& B matrix

       for(i=0;i<R1;i++)
       {
           for(j=0;j<C2;j++)
           {
            for(k=0;k<C1;k++)
            sum=sum+A[i][k]+B[k][j];

            C[i][j]=sum;

            sum=0;
           }
       }

      // printing C matrix

       printf("\nA*B=");

       for(i=0;i<R1;i++)
       {
            printf("\t");

           for(j=0;j<C1;j++)
           {
               printf("%d ",C[i][j]);
           }
           printf("\n");
       }



}
