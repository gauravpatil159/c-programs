#include<stdio.h>
void main()
{
    int n=0, max,i,m=1,min;//without pointers..
    int arr[5];
    int add[5]={0,0,0,0,0};
    for (i=0;i<5;i++)
    {
        printf("Enter Nos.=");
        scanf("%d",&arr[i]);
    }

    max= arr[0];

    for(i=1;i<5;i++)//for finding max element in array
    {
        if(max<arr[i])
        max=arr[i];
    }
    for(i=0;i<5;i++)//for finding more than one max element
    {
        if (max==arr[i])
        {
            n++;
            add[i]=&arr[i];//for sorting purpose
        }    
          
    }
    printf("Max no %d occurs %d times in array at add %d\n",max,n,&arr[0]);

   
    for(i=4;i>=0;i--)//for finding lowest location of max no
    {   if(add[i]!=0)
        min=add[i];
    }   
        printf("Min address is %d\n",min);
        
    
    
    for(i=0;i<=4;i++)//for finding highest location of max no 
    {
        
        if(add[i]!=0)
        {
            max=add[i];

          
        }
     }   
    printf("Max address is %d\n",max);

    for(i=0;i<5;i++)
    printf("%d \t %d\n",&add[i],add[i]);


}    
