#include <stdio.h>

int main()
{
  int totalRowno;
  int row;
  int space;
  int stars;
  printf("Please enter number of rows: \n");
  scanf("%d", &totalRowno);
  for (row = 1; row <= totalRowno; row++)
{
  for (space = 1; space <= (totalRowno - row); space++)
printf(" ");
  for (stars = 1; stars <= ((2 * row) - 1); stars++)
printf("*");
printf("\n");
}
return 0;
}
