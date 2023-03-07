

#include <stdio.h>  
#include <stdlib.h>

int main()
{
  int* ptr, i,j,f=0, c=1, n, min=0,sum=0,minnumber=1;
  printf("Input size of massiv, n<30 \n");
  scanf_s("%d", &n);

  if (!(ptr = (int*)malloc(n * sizeof(int))))   //выделение памяти и проверка, 
  {                                        //достаточно ли для нее места
    puts("Not enough memory");
    return 0;
  }
  for (i = 0; i < n; i++)
  {
    printf("Input element [%d]\n", i + 1);
    scanf_s("%d", ptr + i);
  }
  printf("\nMassiv: \n", i + 1);
  /*for (i = 0; i < n; i++) { min element
    printf("%d ", *(ptr + i));
    if ( *(ptr+i) < min)
      min = *(ptr+i);
  }*/
  for (i = 0; i < n; i++) {
    printf("%d ", *(ptr + i));
    if (*(ptr + i) < *(ptr+min) ){
      min = i; 
      minnumber = i+1;
    }
  }

    while (*(ptr + f) > 0)
      ++f;
    j = f + 1;
    while (*(ptr + j) > 0)
      ++j;
    for (int i = f + 1; i <= j - 1; i++)
      sum += *(ptr + i);
    for (i = 0; i < n; i++) {
      if (*(ptr + i) >=0) {
        c += 1;
      }
      if (c == n)
      {
        sum = 0;
      }
    }

  printf("\nMIN %d\n", minnumber);
  printf("\nSUM %d\n", sum);
  
  free(ptr);     //освобождение динамической памяти

}