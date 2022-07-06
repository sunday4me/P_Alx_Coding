//Function Pointers and Callbacks

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int compare(const void* a,  const void* b)
{
int A =  *(( int*)a);  // typecasting to int* and getting the value
int A =  *(( int*)b);  // typecasting to int* and getting the value
return A-B;
}

int main() {
int i, A[] = { -31, 22, -1, 50, -6, 4}; // => {-1, 4, -6, 22, -31, 50}
qsort(A.6.sizeof(int), compare);
for(i = 0; i<6; i++) 
printf("%d" , A[i]);
}
