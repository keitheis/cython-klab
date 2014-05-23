#include<stdio.h>
#include<string.h>
#include "search.h"

int main()
{
  char a[100] = "abcdef", b[40] = "c";
  int loc;

  printf("Enter the search string:");

  loc = search(a, b);

  if(loc==-1)
    printf("\nNot found");
  else
    printf("\nFound at location %d",loc+1);
  printf("\n");

  return(0);
}

int search(char a[],char b[])
{
  int i,j,firstOcc,ns;
  i=0, j=0, ns=0;

  while(a[i]!=ns)
  {
    while(a[i]!=b[0] && a[i]!=ns)
      i++;
    if(a[i]==ns)
      return(-1);     //search can not continue

    firstOcc = i;

    while(a[i]==b[j] && a[i]!=ns && b[j]!=ns)
    {
      i++;
      j++;
    }

    if(b[j]==ns)
      return(firstOcc);
    if(a[i]==ns)
      return(-1);

    i = firstOcc + 1;
    j = 0;
  }
  return 0;
}
