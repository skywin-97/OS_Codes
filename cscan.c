#include<stdio.h>
int main()
{
 int i,j,sum=0,n;
 int d[20];
 int disk;   //loc of head
 int temp,max;     
 int dloc;   //loc of disk in array
 
 printf("enter number of location\t");
 scanf("%d",&n);
 printf("enter position of head\t");
 scanf("%d",&disk);
 printf("enter elements of disk queue\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&d[i]);
 }
 d[n]=disk;
 n=n+1;
 for(i=0;i<n;i++)    // sorting disk locations
 {
  for(j=i;j<n;j++)
  {
    if(d[i]>d[j])
    {
    temp=d[i];
    d[i]=d[j];
    d[j]=temp;
    }
  }
 }
 max=d[n];
 for(i=0;i<n;i++)   // to find loc of disc in array
 {
 if(disk==d[i]) { dloc=i; break;  }
 }
 for(i=dloc;i<n;i++)
 {
 printf("%d -->",d[i]);
 }
// printf("%d -->",d[i]);
sum = sum + (199-d[i]);
printf("199 -->");
printf("0 -->");
 for(i=0;i<dloc;i++)
 {
 printf("%d-->",d[i]);
 }
 sum=d[n-1]-0;
for(i=0;i<n-1;i++)
{
sum=sum+(d[i+1]-d[i]);
}
sum=sum+d[0]-0;
       printf("\nmovement of total cylinders %d",sum);
 
 return 0;
}
