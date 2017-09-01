#include<stdio.h>

void main()
  {
    int a[],n,i,j;
  
    printf("Enter the Number of elemnts\n");
    scanf("%d",&n);
    printf("ENter the Elements\n");
    for(i=0;i<n;i++);
     {
       scanf("%d",&a[i]);
     }
  
    printf("The unsorted array is ");
     for(i=0;i<n;i++)
      {
        printf(" %d\t",a[i]);
      }
       quick(a,0,n-1);
    printf("The sorted array is ");
       for(i=0;i<n;i++)
         {
           printf(" %d\t",a[i]);
         }
}

void quick(int a[],int low,int high)
  {
    int key;
    int temp;
    low=0;
    high=n-1;
  key=(low+high)/2;
  while(low<=high)
   {
      if(low<=high)
       {
         temp=a[low];
         a[low]=a[high];
         a[high]=temp;
         low=low+1;
          high=high+1;
       }
   }
    
  while(a[low]<key)
    {
         low=low+1;
   }
  while(a[high]>key)
    {
      high=high-1;
    }

  if(low<high)
    {
      quick(a[],low,high);
    }
  if(high>low)
    {
      quick(a,low,high);
    }
return;
}


