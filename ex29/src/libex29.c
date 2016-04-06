#include <stdio.h>
#include <ctype.h>
#include "dbg.h"

#define MAX_STRING_LENGTH 100

int print_a_message(const char *msg)
{
  printf("A STRING: %s\n", msg);

  return 0;
}

int uppercase(const char *msg)
{
  int i = 0;
  int length = strnlen(msg, MAX_STRING_LENGTH);
  
  for(i = 0; i<length; i++) {
    printf("%c", toupper(msg[i]));
  }

  printf("\n");

  return 0;
}

int lowercase(const char *msg)
{
  int i = 0;
  int length = strnlen(msg, MAX_STRING_LENGTH);
  
  for(i = 0; i<length; i++) {
    printf("%c", tolower(msg[i]));
  }

  printf("\n");

  return 0;
}

int fail_on_purpose(const char *msg)
{
  return 1;
}
