#include <stdio.h>
#include<limits.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>
 
#define loop(first,  size, decrement) for(int i=first; i < size; i+= decrement)
#define fori(size) for(int i=0; i < size; i+= 1)
#define forj(size) for(int j=0; j < size; j+= 1)
 
#define int_i(x) scanf("%i", &x)
#define int_o(x) printf("%i\n", x)
 
#define long_i(x) scanf("%lld", &x)
#define long_o(x) printf("%lld ", x)

 
#define s_i(x) scanf("%s", x)
#define s_o(x) printf("%s\n", x)
 
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int* int_arry_i(int size)
{
  int* arr = (int *) malloc (size * sizeof(int));
  fori(size) int_i(arr[i]);
  
  return arr;
}


void int_arry_o(int* arr ,int size)
{
  
  fori(size) int_o(arr[i]);
  
  return ;
}



void solve()
{

}
 
 

 
 
int maxArry(int * arry, int size)
{
    int max = INT_MIN;
    
    fori(size)
    {
        if (arry[i] > max) max = arry[i];
    }
    return max;
    
}


int minArry(int * arry, int size)
{
    int min = INT_MAX;
    
    fori(size)
    {
        if (arry[i] < min) min = arry[i];
    }
    return min;
}

 
 
int main()
{
    int N;
    int_i(N);
 
    
    loop(0, N, 1) solve();
    
}
