#include<stdio.h>
#include<conio.h>

void menu()
{
	printf("\n\n    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n");
	printf("    * * * * * * * * * * *   WELCOME TO 1-D ARRAY WORLD  * * * * * * * * *\n");
	printf("    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n\n");
	printf("        ****  CHOOSE YOUR OPTION TO PERFORM ANY OPERATION  **** \n\n");
	printf(". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . ..\n\n");
	printf(".   1: Enter 1 for insertion new element in array:           .\n\n");
	printf(".   2: Enter 2 for deletion  in array:                       .\n\n");
	printf(".   3: Enter 3 for updation   in array:                      .\n\n");
	printf(".   4: Enter 4 for finding max term in array:                .\n\n");
	printf(".   5: Enter 5 for finding min tern  in array:               .\n\n");
	printf(".   6: Enter 6 for finding reverse element in array:         .\n\n");
	printf(".   7: Enter 7 for searching any element in array:           .\n\n");
	printf(".   8: Enter 8 for  traversal in array:                      .\n\n");
	printf(".   9: Enter 9 for  sorting element in array:                .\n\n");
	printf(".  10: Enter 10 for  exiting from array:                     .\n\n");	
	printf(". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . ..\n\n");
	printf("                                                               MADE BY PRITI\n");
}

int reverse(int size,int arr[])
{
	int i=0,k,n=size-1;
	while(i<=n)
	{
		k=arr[i];
		arr[i]=arr[n];
		arr[n]=k;
		i++;
		n--;
	}
	for(i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}
	return size;
}
void update(int size,int arr[])
{
	int n,i,r,p,g,k,z=3;
	while(z>0)
	{
	printf("     1: Enter 1 for replacing \n\n");
		printf("     2: Enter 2 for swaping \n\n");
		scanf("%d",&n);
		if(n==1)
		{
				printf("   Enter the index at which data will be replace: ");
				scanf("%d",&r);
				if(0<r && r<size)
			{
				printf("   Enter the data to be replace: ");
				scanf("%d",&k);
				arr[r]=k;
				printf("     Your new array is:   ");
			for(i=0;i<size;i++)
			{
				printf(" %d ",arr[i]);
			}
		} 
				else
		printf("      Please enter available no. :\n\n ");
    
		  break;	
		}
		if(n==2)
		{
			printf("     Enter first index no. :  \n\n");
			scanf("%d",&r);
				printf("     Enter second index no. : \n\n ");
			scanf("%d",&p);
			if(0<r && r<size||0<p&&p<size)
			{
				g=arr[r];
				arr[r]=arr[p];
				arr[p]=g;
				printf("      New array after swape is:  \n\n ");
			for(i=0;i<size;i++)
			{
					printf(" %d ",arr[i]);
		    }
		    break;
		}
		 else
		 printf("      Please enter available index !! ");
		}
		z--;
			if(z<1)
		printf("    Time Out !!   \n\n");
		else
		printf("      Please select a valid no. :\n\n ");
    }
}

    int insert(int size,int arr[],int index,int element)
    {
    	int i;
    			if(size<=index<0)
		printf("        Please inter the valid index:");
		else
	{ 
    	for(i=size;i>index;i--)
    	{
    		arr[i]=arr[i-1];
		}
		arr[index]=element;
		size++;
		printf("       Your new array is:\n\n");
			printf("              ");
		for(i=0;i<size;i++)
		{
			printf(" %d ",arr[i]);
		}
	}
	 return size;
}
	int delet(int size,int arr[],int index)
	{
		int i,m;
		if(size<=index<0)
		printf("     Please inter the valid index:");
		else
		{
		m=arr[index];
		
		for(i=index;i<size;i++)
		{
			arr[i]=arr[i+1];
		}
		size--;
		printf("      Your new array after deletion is :\n");
		for(i=0;i<size;i++)
		{
			printf(" %d ",arr[i]);
		}
		printf("\n         Your deleted element is:%d",m);
	}
	 return size;
}

   void search(int size,int arr[],int data)
   {
   	int i,index;
   	for(i=0;i<size;i++)
   	{
   		if(data==arr[i])
   		{
   		
   		index=i;
   		printf("      Entered data index is:%d\n\n",index);
   		break;
	   }
   }
   if(i>=size)
     printf("      Your data is not available in given array\n\n");
     
	 printf("     Searching of entered data is successfully done. \n\n");
}
int sort(int size ,int arr[])
{
	
	int i,k,n,z=3,j;
	while(z>0)
	{
	printf("       1: Enter 1 for Ascending order sorting\n\n");
		printf("       2: Enter 2 for Dscending order sorting\n\n");
		scanf("%d",&n);
			if(n==1)
		{
				printf("     Your new array in Ascending order is:    ");
			for(i=0;i<size;i++)
			{
				for(j=(i+1);j<size;j++)
	        	{
				  if(arr[i]>arr[j])
					{
						k=arr[j];
						arr[j]=arr[i];
						arr[i]=k;
					}
				}
				printf(" %d ",arr[i]);
			}
		  break;	
		}
		if(n==2)
		{
			printf("     Your new array in Dscending order is:    ");
			for(i=0;i<size;i++)
			{
				for(j=(i+1);j<size;j++)
	        	{
				  if(arr[i]<arr[j])
					{
						k=arr[j];
						arr[j]=arr[i];
						arr[i]=k;
					}
				}
				printf(" %d ",arr[i]);	
				
			}
		  break;
		}
		z--;
			if(z<1)
		printf("   Try again !!  \n\n");
		else
		printf("      Please enter available no. :\n\n ");
    }
     return size;
}

int max(int size,int arr[])
{
	int i,j,max1=arr[0];
	for(i=0;i<size;i++)
		{
		
		if(arr[i]>max1)
		max1=arr[i];
		
	}
	 printf("   OUTPUT:-\n\n");
	return max1;
}

int min(int size,int arr[])
{
	int i,min1=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]<min1)
		min1=arr[i];
    }
    printf("   OUTPUT:-\n\n");
	return min1;
}
void travers(int size,int arr[])
{
	int i;
printf("\n         Your travers array is: \n\n");
	for(i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}	
}

int main()
{int a[]={4,1,6,3,9,5,2,7};
int option,b=8,i,c,n,s;
int chance=3;
	while(chance>0)
	{
	menu();
	scanf("%d",&option);
	
	switch(option)
     {
		case 1:
		    {
				printf("       You select 1 for insertion:\n\n");
				printf("    \n   Enter the index of element at which new data to be insert : ");
                scanf("%d",&c);
                		if(b<=c<0)
		       printf("        Please inter the valid index:");
		        else
		     {
	            printf("  \n\n       Enter the new element which is inserting: ");
	              scanf("%d",&n);
			     insert(b,a,c,n);
			     break;
		       }
		    }
				case 2:
			printf("          You select 2 for deletion:");
			printf("\n\n          Enter the index of element at which data to be delete :\n");
			scanf("%d",&c);
			b=delet(b,a,c);
			break;
			
				case 3:
			printf("         You select 3 for updation:\n\n");
			update(b,a);
			break;
				case 4:
			printf("          You select 4 for max term:\n\n");
			s=max(b,a);
              printf("   Your max term is:%d",s);			
			break;
				case 5:
			printf("        You select 5 for min term:\n\n");
			s=min(b,a);
			printf("   Your min term is:%d",s);	
			break;
				case 6:{
				
			printf("        You select 6 for reverse the array:\n\n");
			reverse(b,a);
			break;}
				case 7:
			printf("         You select 7 for seaching:\n\n");
			printf("     Enter the data to be search:");
			scanf("%d",&n);
			search(b,a,n);
			break;
				case 8:{
			printf("         You select 8 for traversal:");
			travers(b,a);
			break;}
				case 9:
			printf("        You select 9 for sorting the array:\n\n");
			sort(b,a);
			break;
				case 10:
					printf(" *** Thanks For Coming In Array World ***");
		    return 0;
		    default:
		    	if(chance>1)
			printf("  ***  Please select the valid option:  ***  \n\n");
			chance--;
	  }
    }
    printf("      No more tries!!    \n\n");
    printf(" *** Thanks For Coming In Array World ***");
    
    return 0;
}		
