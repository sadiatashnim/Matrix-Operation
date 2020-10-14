#include<stdio.h>
int main()
{
    int i,j,numberOfRows,numberOfCols;
    int A[10][10],B[10][10],C[10][10];

    printf("Enter the number of Row and Cols: ");
    scanf("%d %d",&numberOfRows,&numberOfCols);

    //scanning A mstrix
    printf("Enter the elements for A matrix.\n");

    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    //printing a matrix
    printf("A= ");

    for(i=0;i<numberOfRows;i++)
    {
        printf("\t");

        for(j=0;j<numberOfCols;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //scanning B matrix
    printf("\n\nEnter elements for B matrix.\n");

    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

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

    //additiob of A and B matrix
      for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
//printing c matrix
     printf("\nA+B= ");
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





