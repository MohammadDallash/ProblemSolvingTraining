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


int**** int_arry_4D_setUP(int x, int y, int z, int w)
{
    int sizeP = sizeof(int *);
    
    int size1D = sizeof(int) * w;
    int size2D = z*sizeP + z*size1D;
    int size3D = y*sizeP + y*size2D;
    int size4D = x*sizeP + x*size2D;
    
    
	int**** arr = malloc(size4D);
	
	fori(x)
    {
        arr[i] = (int***) (arr + x  + i * size3D / sizeP);
        forj(y)
        {
            arr[i][j] = (int**) (arr + x + y  + i * size3D / sizeP + j * size2D / sizeP);
            fork(z)
            {
                arr[i][j][k] = (int*) (arr + x + y + z  + i * size3D / sizeP + j * size2D / sizeP + k * size1D / sizeP);
            }
        }
    }
    
    
    return arr;
}

int max(int count,...) 
{
    va_list list;
    va_start(list, count);
    
    int max = INT_MIN;
    
    int current;
    
    fori (count) 
    {
        current = va_arg(list, int);
        if (current > max) max = current; 
    }
    
    va_end(list);
    return max;
}
int min(int count,...) 
{
    va_list list;
    va_start(list, count);
    
    int min = INT_MAX;
    
    int current;
    
    fori (count) 
    {
        current = va_arg(list, int);
        if (current < min) min = current; 
    }
    
    va_end(list);
    return min;
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
