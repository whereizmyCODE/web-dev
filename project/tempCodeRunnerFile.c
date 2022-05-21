#include <stdio.h>

int main()
{
    int arr[6][5];   
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<6;i++)     
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nElements in the matrix are \n");
    for(int i=0;i<6;i++)     
   {
        for(int j=0;j<5;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nRow Sum....\n");
    for(int i=0;i<6;i++)   
    {
        int rsum=0;
        for(int j=0;j<5;j++)
        {
            rsum=rsum+arr[i][j];
        }
        printf("\nSum of all the elements in row %d is %d\n",i,rsum);
    }
}