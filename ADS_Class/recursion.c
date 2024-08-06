#include <stdio.h>
#include  <stdbool.h>

int isSorted (int *array, int n){
  if(n == 0|| n == 1){
    return true;
  }

  if(array[0] <=  array[1] && isSorted(array+1, n-1)){
    return true;
  }
  return false;
}


int main()
{
  int array[] = {2,7,8,12};
  int n = sizeof(array)/sizeof(array[0]);
  int ans = isSorted(array, n);
  printf("%d", ans);
  return 0;
}