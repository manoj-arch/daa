#include <stdio.h>
struct faculty
{
 char name[20];
 int exp;
};
int x[100];
int d=9;
struct faculty a[7]={{"________",},{"Mr. John",1},{"Mr. Jacob",2},{"Mr. Dave",3},
 {"Mrs. Emily",6},{"Mrs. Ava",7},{"Ms. Jessica",8}};
void sum_of_subset (int weightsofar,int k,int remwt)
{
 int i=0;
 x[k] = 1;
 if (weightsofar + a[k].exp == d)
 {
 printf ("\nTeam of:\n{\n");
 for (i=0;i<k;i++)
 {
 if (x[i+1] == 1)
 printf ("\t%s -> %dyrs of Experience\n",a[i+1].name,a[i+1].exp);
 }
 printf ("}\n");
 }
 else if (weightsofar+a[k].exp+a[k+1].exp <= d)
 sum_of_subset (weightsofar+a[k].exp,k+1,remwt-a[k].exp);
 if ((weightsofar+remwt-a[k].exp >= d) && (weightsofar+a[k+1].exp <= d))
 {
 x[k] = 0;
 sum_of_subset (weightsofar,k+1,remwt-a[k].exp);
 }
}
int main ()
{
 int i,sum=0;
 printf ("Sl.No.\t\tFaculty\t\t\tTeaching Experience\n");
 for (i=1;i<=6;i++)
 {
 printf ("%d\t\t\t%s\t\t%dyrs\n",i,a[i].name,a[i].exp);
 sum = sum + a[i].exp;
 }
 printf ("\nRequired Years of Experience: %dyrs\n",d);
 printf ("\nTeams with %d Years of Experience:\n",d);
 if (sum < d)
 printf ("No Team Exists\n");
 else
 sum_of_subset (0,1,sum);
return 0;
}
