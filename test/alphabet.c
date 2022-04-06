#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main()
{
  char c = 'a';
  char b = 'A';
  char f = 'Z';
  char d = 'z';

  while(c <= d)
      {
       putchar(c);
       c++;
      }
  while(b <= f)
    {
      putchar(b);
      b++;
    }
  putchar('\n');
  return 0;
}
