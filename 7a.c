#include <stdio.h>
int a[100],x[100];
int d;
void sum_of_subset (int weightsofar,int k,int remwt)
{
 int i;
 x[k] = 1;
 if (weightsofar + a[k] == d)
 {
 printf ("Subset ===>> {");
 for (i=1;i<=k;i++)
 if (x[i] == 1)
 printf ("%d,",a[i]);
 printf ("}\n");
 }
 else if (weightsofar + a[k] + a[k+1] <= d)
 sum_of_subset (weightsofar+a[k],k+1,remwt-a[k]);
 if ((weightsofar+remwt-a[k] >= d) && (weightsofar+a[k+1] <= d))
 {
 x[k] = 0;
 sum_of_subset (weightsofar,k+1,remwt-a[k]);
 }
}
int main ()
{
 int n,i,sum=0;
 printf ("Enter no. of Elements\n");
 scanf ("%d",&n);
 printf ("Enter the Elements\n");
 for (i=1;i<=n;i++)
 {
 scanf ("%d",&a[i]);
 sum = sum + a[i];
 }
 printf ("Enter the Required Sum to be Computed\n");
 scanf ("%d",&d);
 if (sum < d)
 printf ("No Solution Exists\n");
 else
 {
 printf("The Solution is\n");
 sum_of_subset (0,1,sum);
 }
 return 0;
}
