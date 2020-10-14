#include<stdio.h>
int main()
{
    int i,j,numberOfRows,numberOfCols;
    int A[10][10],B[10][10],C[10][10];

    printf("Enter the number Of Rows and Cols:");
    scanf("%d%d",&numberOfRows,&numberOfCols);

    //scanning A matrix
    printf("Enter elements for A matrix.\n");

    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //scanning of B matrix
    printf("Enter elements for B matrix.\n");

    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);

        }
        printf("\n");
    }

    //printing A matrix
    printf("A=");

    for(i=0;i<numberOfRows;i++)
    {
        printf("\t");

        for(j=0;j<numberOfCols;j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }

    //printing B matrix

    printf("B=");

    for(i=0;i<numberOfRows;i++)
    {
        printf("\t");

        for(j=0;j<numberOfCols;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    //subtraction of A and B matrix

    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            C[i][j]=A[i][j]-B[i][j];
        }
    }

   // printing C matrix

   printf("\A-B=");

   for(i=0;i<numberOfRows;i++)
   {
       printf("\t");

       for(j=0;j<numberOfCols;j++)
       {
           printf("%d ",C[i][j]);
       }
       printf("\n");
   }
}
