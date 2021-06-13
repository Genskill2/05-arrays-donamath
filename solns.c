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


int min(int A[], int n)
{
  int small=A[0],i;
  for(i=0;i<n;i++)
  {
    if(A[i]<small)
      small=A[i];
  }
  return small;
}


float average(int A[], int n)
{
  int sum=0,i;
  for(i=0;i<n;i++)
  {
   sum+=A[i];
  }
  return sum/n;
}


int mode(int A[], int n)
{
  int mode=A[0],count=0,count1=0;
  for(i=0;i<n;i++){
    for(j=i;j<n;j++){
      if(A[i]==A[j]){
        count1++;
      }
    }
    if(count1>count)
    {
      count=count1;
      mode=A[i];
    }
  }
  return mode;
}
