/* Enter your solutions in this file */
#include <stdio.h>

int max(int A[], int n)
{
  int large=A[0],i;
  for(i=0;i<n;i++)
  {
    if(A[i]>large)
      large=A[i];
  }
  return large;
}
