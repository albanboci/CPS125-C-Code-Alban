#include <stdio.h>
#include <stdlib.h>
#define col 200
/* -------Defining the required functions.------- */
double average(double a[][col],int r, int c);
double corners(double a[][col],int r, int c);
double row(double a[][col],int r, int c, int Rcall);
double column(double a[][col],int r, int c, int Ccall);
double diagonal(double a[][col],int r, int c, double *d, double *ad);
double borders(double a[][col],int r, int c);
/* -----------------------------------------------*/ 

int main(void)
{
	FILE *fp;
	double a[200][col], avgt, avgc, sumr, sumc, diag, anti_diag, res, sumbor;
	int r, c, i, j, Rcall, Ccall;
	fp=fopen("data.txt","r");
	
	if(fp==NULL)
	{
		puts("Error opening the file!");
		return(1);
	}
	fscanf(fp,"%d%d",&r,&c);
	printf("The rows and columns respectively are: %d , %d\n\n",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			fscanf(fp,"%lf",&a[i][j]);
		}
	}
	puts("The elements of the array array are");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%10.3lf",a[i][j]);
		}
		puts("");
	}
	fscanf(fp,"%d%d",&Rcall,&Ccall);
	puts("\nThe row and column call numbers are:");
	printf("%d,%d \n",Rcall, Ccall);
	
	avgt=average(a, r, c);
	printf("\nThe average of the entire array is: %.3lf\n",avgt);
	
	avgc=corners(a, r, c);
	printf("\nThe sum of the corners is: %.3lf\n",avgc);
	
	sumr=row(a, r, c, Rcall);
	printf("\nThe sum of elements of row %d is: %.3lf\n",Rcall,sumr);
	
	sumc=column(a, r, c, Ccall);
	printf("\nThe average of elements of column %d is: %.3lf\n",Ccall,sumc);
	
	res=diagonal(a, r, c, &diag, &anti_diag); 
	if(res==5)
	{
		puts("\nThe Matrix isn't a square matrix therefore the diagonal addition is not possible!");
	}
	else
	{
		printf("\nThe sum of the diagonal is %.3lf and the sum of the anti diagonal is %.3lf\n",diag,anti_diag);
	}
	
	sumbor=borders(a, r, c);
	printf("\nThe sum of the borders of the array is: %.3lf\n",sumbor);
	
	fclose(fp);
	 
	return(0);
}

double average(double a[][col], int r, int c)
{
	int i,j;
	double sum=0, avg=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];
		}
	}
	avg=sum/(r*c);
	return(avg);
}

double corners(double a[][col],int r, int c)
{
	double sum=0;
	sum=a[0][0]+a[0][c-1]+a[r-1][0]+a[r-1][c-1];
	
	return(sum);
}
double row(double a[][col],int r, int c, int Rcall)
{
	int i;
	double sum=0;
	Rcall=Rcall-1;
	for (i=0;i<c;i++)
	{
		sum=sum+a[Rcall][i];
	}
	return(sum);
}

double column(double a[][col],int r, int c, int Ccall)
{
	int i;
	double sum=0,avg=0;
	Ccall=Ccall-1;
	for (i=0;i<c;i++)
	{
		sum=sum+a[i][Ccall];
	}
	avg=sum/r;
	return(avg);
}
double diagonal(double a[][col],int r, int c, double *d, double *ad)
{
	int i;
	double sumd=0, sumad=0;
	if(r!=c)
	{
		return(5);
	}
	for(i=0;i<r;i++)
	{
		sumd=sumd+a[i][i];
		sumad=sumad+a[i][r - i - 1];
	}
	*d=sumd;
	*ad=sumad;
	return(0);
}

double borders(double a[][col],int r, int c)
{
	int i;
	double sumt=0, sumb=0, suml=0, sumr=0, sumbor=0;
	for(i=0;i<c;i++)
	{
		sumt=sumt+a[0][i];
	}
	for(i=0;i<c;i++)
	{
		sumb=sumb+a[r-1][i];
	}
	for(i=1;i<r-1;i++)
	{
		suml=suml+a[i][0];
	}
	for(i=1;i<r-1;i++)
	{
		sumr=sumr+a[i][c-1];
	}
	sumbor=sumt+sumb+suml+sumr;
	return(sumbor);
}

