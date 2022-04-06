#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main()
{
  char c = 'a';
  char d = 'z';

  while(c <= d)
    {
      putchar(d);
      d--;
    }
    putchar('\n');
  return 0;
}
