#include<stdio.h>
int main(){
	int arr[]={20,21,22,23,34,25,26};
	int n,low,high;
	n=7;
	 low=20,high=26;
	 int i,j,flag;
	   for(i=low;i<=high;i++)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(i==arr[j])
			{
				flag=1;
				break;
			}
		}
		    if(flag==1 && i!=22)
		    {
		    	printf("%d ",i);
			}
			}
			return 0;
			}  
		   
	
	

