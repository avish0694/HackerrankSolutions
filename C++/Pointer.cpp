#include <stdio.h>
#include <stdlib.h>
//Pointer

void update(int *a, int *b) {
  int Y = *a + *b;
  int X = abs(*a + *b);
  *a = Y;
  *b = X;

  }
  
  int main()
  {
    int a, b;
   int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    
    return 0;
  }