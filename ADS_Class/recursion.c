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


int firstOccurence (int *array, int n,int key){
  if(n == 0) return -1;
  if(array[0] == key) return 0;
  int sub = firstOccurence(array+1, n-1, key);
  if(sub != -1) return sub+1;

return -1;
}


int lastOccurence (int *array, int n, int key){
  if(n == 0) return -1;
  int sub = lastOccurence(array+1, n-1, key);
  if(sub != -1){
    if(array[0] == key) return 0;

  }
}

int main()
{
  int array[] = {2,7,8,12};
  int n = sizeof(array)/sizeof(array[0]);
  int ans = firstOccurence(array, n, 12);
  int ans2 = lastOccurence(array, n , 12);
  printf("%d\n", ans);
  printf("%d\n", ans2);
  return 0;
}