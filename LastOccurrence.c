#include<stdio.h>
int main(void)
{
  //Declaring variables.
  int M,N; //M = element to be search, N = size of the array.
  int i,j,count;
  //Input the size of the array.
  printf("Enter the size of the array: ");
  scanf("%d",&N);
  //Declaring integer array
  int array[N];
  //Enter the element what is needed to be search
  printf("Enter the element to be search: ");
  scanf("%d",&M);
  //Input elements to the array
  printf("Enter elements to the array:");
  for(i=1;i<=N;i++)
  {
    scanf("%d",&array[i]);
  }
  int k;
  k=0;
  j=0;
  count = 0;
  //Checking elements in the array to find the last occurrence of the element M
  for(j=N;j>=0;j--)
  {
    if(array[j]==M)
    {
      k = j;
      printf("\n%d\n",k);
      break;
    }
    else
    {
      count = count+1;
    }
  }
  //If the M element not in the array print -1
  if(count == (N+1))
  {
      printf("\n-1\n");
  }
  return 0;
}
