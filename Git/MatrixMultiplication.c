#include <stdio.h>
int m,n,r,p;
void input();
void EnterData(int array1[][n], int array2[][p]);
void Mult(int final[][p],int array1[][n],int array2[][p]);
void Display(int final[][p]);
int main(){
    input();
    int array1[m][n];
    int array2[r][p];
    int final[m][p];
    if (n!=r){
        printf("\nINVALID");
        return 0;
    }
    else{
        EnterData(array1,array2);
        Mult(final,array1,array2);
        Display(final);
		printf("\n________Thank You__________");
    return 0;
	}
}
void input(){ 
    printf("Input the size of the matrix1: ");
    scanf("%d %d",&m,&n);
    printf("Input the size of the matrix2: ");
    scanf("%d %d",&r,&p);

}
void EnterData(int array1[][n], int array2[][p]){
	printf("\nEnter elements of matrix 1:\n");
	for(int i = 0; i < m; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			printf("Enter elements a%d%d: ", i + 1, j + 1);
			scanf("%d", &array1[i][j]);
		}
	}
    printf("\nEnter elements of matrix 2:\n");
	for(int i = 0; i < r; ++i)
	{
		for(int j = 0; j < p; ++j)
		{
			printf("Enter elements b%d%d: ", i + 1, j + 1);
			scanf("%d", &array2[i][j]);
		}
	}
	printf("\nelements of matrix 1:\n");
	for(int i = 0; i < m; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			printf("Enter elements a%d%d: ", i + 1, j + 1);
			printf("%d\n", array1[i][j]);
		}
	}
    printf("\n elements of matrix 2:\n");
	for(int i = 0; i < r; ++i)
	{
		for(int j = 0; j < p; ++j)
		{
			printf("Enter elements b%d%d: ", i + 1, j + 1);
			printf("%d\n", array2[i][j]);
		}
	}
}
void Mult(int final[][p],int array1[][n],int array2[][p]){
	for(int i=0;i<m;++i){
		for (int j=0;j<p;++j){
			final[i][j]=0;
		}
	}
    for(int i=0;i<m; ++i)
	{
		for(int j=0;j<p; ++j)
		{
			for(int k=0; k<n; ++k)
			{
				final[i][j]=final[i][j]+array1[i][k]*array2[k][j];
			}
		}
	}
}
void Display(int final[][p]){
	printf("\n Final Matrix after multiplication: \n");
	for(int i = 0; i < m; ++i)
	{
		for(int j = 0;j<p ; ++j)
		{
			printf("%d\t",final[i][j]);
			if(j ==p-1)
				printf("\n");
		}
	}
}

