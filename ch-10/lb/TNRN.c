#include <stdio.h>

void print();

void main()
{

  int p;

  printf("Enter any ptint:");
  scanf("%d", &p);

  for (int i = 1; i <= p; i++)
  {
    print();

    printf("\n");
  }
}

void print()
{
  printf("purvisha!!");
}