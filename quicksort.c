#include<stdio.h>
void quick(int a[],int l,int r){
   int key=a[0];
   int low=l+1;
   int temp,count;
  
   for(count=l+1;count<r;count++)
     {
      if(a[count]<=a[key]) {
           temp=a[count];
            a[count]=a[low];
            a[low]=temp;
             low++;
         }
    }
 temp=a[low-1];
     a[low-1]=a[key];
     a[key]=temp;
quick(a,0,l-1);
quick(a,l,r);
}

void main()
  {
    int i,n;
    scanf("%d",&n);
    int a[n];
     for(i=0;i<n;i++)
      {
         scanf("%d",&a[i]);
       }
   printf("the sorted array is :-");
     quick(a,0,n-1);
      for(i=0;i<n;i++)
          {
            printf(" %d\t",a[i]);
          }
   }
           
