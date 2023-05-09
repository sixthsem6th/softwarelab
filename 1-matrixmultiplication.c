#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int a[10][10],b[10][10],m[10][10],i,j,k,p,q,r,s,l;
    char x[10],y[10];
    int t=0,fl=0,ain=0,bin=0;
    printf("\n Enter the Size of A matrix:");
    scanf("%d%d",&p,&q);
    printf("\n Enter the Size of B Matrix:");
    scanf("%d%d",&r,&s);
    if(q==r)
    {
	printf("Test Case 1: Matrix Multiplication can be done");
	printf("\n Case 1: Success");
	printf("\n Enter the elements of A:");
	for(i=0;i<p;i++)
	{
	    for(j=0;j<q;j++)
	    {
		fl=0;
		ain=0;
		scanf("%s",&x);
		l = strlen(x);
		while (x[ain++]!='\0')
		{
		    if(x[ain]=='.')
		    {
			fl=1;
			break;
		    }
		}
		if(fl==0)
		{
		  a[i][j]=atoi(x);
		}
		else
		{
		  t=1;
		}
	    }
	}
printf("\n Enter the elements of B:");
	for(i=0;i<r;i++)
	{
	  for(j=0;j<s;j++)
	  {
	    fl=0;
	    bin=0;
	    scanf("%s",&y);
	    l = strlen(y);
	    while (y[bin++]!='\0')
	    {
	      if(y[bin]=='.')
	      {
		fl=1;
		break;
	      }
	    }
	    if(fl==0)
	    {
	      b[i][j]=atoi(y);
	    }
	    else
	    {
	      t=1;
	    }
	  }
	}
	if(t==0)
	{
	  for(i=0;i<p;i++)
	  {
	    for(j=0;j<s;j++)
	    {
	      m[i][j]=0;
	      for(k=0;k<q;k++)
	      {
		m[i][j]=m[i][j]+a[i][j]*b[k][j];
	      }
	    }
	  }
	  printf("\n The result of of the Matrix Multiplication is:");
	  for(i=0;i<p;i++)
	  {
	    for(j=0;j<s;j++)
	    {
	      printf("%d\t",m[i][j]);
	    }
	  printf("\n");
	  }
	}
	else
	{
	  printf("\n Test Case 3: Matrix multiplication is not possible\nOne word values is not an integer \n Case  3: Failure");
	  getch();
	}
    }
    else
    {
      printf("\n Test Case 2: Matrix Multiplication is not possible \n The columns of A matrix is not equal to rows of B matrix\n Case 2:failure");
      getch();
    }
}
