/* Enter your solutions in this file */
#include <stdio.h>
#include<math.h>

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
  int mode=A[0],count=0,count1=0,i,j;
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


int factors(int n, int A[])
{
  int i=0,j;
  while(n%2==0)
  {
    A[i]=2;
    i++;
    n=n/2;
  }
  for(j=3;j<sqrt(n);j+=2)
  {
    while(n%j==0)
    {
      A[i]=j;
      i++; 
      n=n/j;
    }
  }
  if(n>2)
  {
    A[i]=2;
    i++; 
  }
  return i;
}
  
