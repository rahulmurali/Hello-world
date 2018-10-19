#include<stdio.h>
int i,j,temp=0;
void bubblesort(int a[],int n)
{
	for(i=1;i<=n-1;i++)
    	for(j=1;j<=n-i;j++)
     	{
       		if(a[j]>a[j+1])
         	{
           		temp=a[j];
           		a[j]=a[j+1];
           		a[j+1]=temp;
          	}
      	}
}
void selectionsort(int a[],int n)
{
	int min,minloc;
   	for(i=1;i<=n-1;i++)
   	{
    	min=a[i];
      	minloc=i;
      	for(j=i+1;j<=n;j++)
      	{
         	if(min>a[j])
         	{
           		min=a[j];
           		minloc=j;
         	}
       	}
       	if(i!= minloc)
       	{
         	temp=a[minloc];
         	a[minloc]=a[i];
         	a[i]=temp;
       	}
   	}
}
void insertionsort(int a[], int n)
{
	int  k;
   	for (i = 2; i <=n; i++)
   	{
    	for(j=1;j<=i;j++)
        {
        	if(a[j]>a[i])
           	{
             	temp=a[i];
             	for(k=i;k>=j+1;k--)
             	{
               		a[k]=a[k-1];
              	}
              	a[j]=temp;
              	break;
            }
        }
    }
}              
void main()
{  
	int n,a[50], c;
  	printf("\nenter the limit");
  	scanf("%d",&n);
   	printf("\nenter the elements");
  	for(i=1;i<=n;i++)
    	scanf("%d",&a[i]);
  	do
  	{
    	printf("\n1.bubblesort\n2.selectionsort\n3.insertion\n4.Exit\n Enter Your  Choice :");
        scanf("%d",&c);
        switch(c)
        {
        	case 1: bubblesort(a,n);
                printf("\nsorted ...... ");
                for(i=1;i<=n;i++)    
                	printf( "%d",a[i]);
                break;
            case 2: selectionsort(a,n);
				printf("\nsorted ...... ");
				for(i=1;i<=n;i++)    
					printf( "%d",a[i]);
				break;
            case 3: insertionsort(a,n);
				printf("\nsorted ...... ");
				for(i=1;i<=n;i++)    
					printf( "%d",a[i]);
				break;
            case 4:
            	break;
        }
    }while(c!=4); 
}