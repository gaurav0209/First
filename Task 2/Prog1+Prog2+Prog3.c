#include <stdio.h>


int main()
{
    int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2, i, j, k;
    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for second matrix: ");
    scanf("%d %d",&r2, &c2);

    while (c1 != r2)
    {
        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d",&r2, &c2);
    }

    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j)
        {
            printf("Enter elements a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&b[i][j]);
        }

    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
        {
            c[i][j] = 0;
        }

    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<c1; ++k)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }

    printf("\nOutput Matrix:\n");
    for(i=0; i<r1; ++i)
    {
        for(j=0; j<c2; ++j)
        {
            printf("%d\t", c[i][j]);

        }
    printf("\n");
    }





 printf("Norm of matrix 1/n");
 int  sum1 = 0, a1 = 0, normal1;


	for (i = 0; i < r1; ++i) {
		for (j = 0; j < c1; ++j) {

			a1 = a[i][j] * a[i][j];
			sum1 = sum1 + a1;
		}
	}
	normal1 = sqrt((double)sum1);

 printf("Norm of matrix 2/n");
 int  sum2 = 0, a2 = 0, normal2;


	for (i = 0; i < r2; ++i) {
		for (j = 0; j < c2; ++j) {

			a2 = b[i][j] * b[i][j];
			sum2 = sum2 + a2;
		}
	}
	normal2= sqrt((double)sum2);
	printf("Norm of matrix 3/n");
 int  sum3= 0, a3 = 0, normal3;


	for (i = 0; i < r1; ++i) {
		for (j = 0; j < c2; ++j) {

			a3 = c[i][j] * c[i][j];
			sum3 = sum3 + a3;
		}
	}
	normal3= sqrt((double)sum3);




    int transpose1[10][10];
	printf("Transpose of matrix 1/n");
	for (i = 0; i < r1; i++)
      for( j = 0 ; j < c1 ; j++ )
         transpose1[j][i] = a[i][j];

         int transpose2[10][10];
	printf("Transpose of matrix 2/n");
	for (i = 0; i < r2; i++)
      for( j = 0 ; j < c2 ; j++ )
         transpose2[j][i] = b[i][j];

          int transpose3[10][10];
	printf("Transpose of matrix 2/n");
	for (i = 0; i < r1; i++)
      for( j = 0 ; j < c2 ; j++ )
         transpose3[j][i] = c[i][j];






}
