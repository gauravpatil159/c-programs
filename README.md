# to-find-grater-no
this program is to find grater no out of 5
#include<stdio.h>
void main()
{
    int n,i,max;
    int arr[5];
    for(i=0;i<5;i++)
    {
    
    printf("Enter no");
    scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<5;i++)
    {if(max<arr[i])
    max=arr[i];
    }
    printf("Max no is = %d",max);

}
