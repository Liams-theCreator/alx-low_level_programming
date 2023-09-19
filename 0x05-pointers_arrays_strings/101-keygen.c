#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 84
#define MIN_CHAR 33
#define MAX_CHAR 126
#define PASSWORD_SUM 2772

/**
 * main - function that generates a password and prints it to the console.
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
  char password[PASSWORD_LENGTH + 1];
  int i, sum = 0, diff, a, b;

  srand(time(NULL));

  while (sum < PASSWORD_SUM)
  {
    password[i] = MIN_CHAR + rand() % (MAX_CHAR - MIN_CHAR + 1);
    sum += password[i];
    i++;
  }
  password[i] = '\0';

  diff = sum - PASSWORD_SUM;
  a = diff / 2;
  b = diff - a;

  for (i = 0; password[i]; i++)
  {
    if (password[i] >= MIN_CHAR + a)
    {
      password[i] -= a;
      break;
    }
  }
  for (i = 0; password[i]; i++)
  {
    if (password[i] >= MIN_CHAR + b)
    {
      password[i] -= b;
      break;
    }
  }

  printf("%s", password);
  return 0;
}
