#include "lab.h"
#include <stdio.h>
#include <stdlib.h>

char *get_greeting(const char *restrict name)
{
  if (name == NULL)
  {
    return NULL;
  }


  // Allocate memory for the greeting message
  int length = snprintf(NULL, 0, "Hello, %s!", name);
  if (length < 0) // GCOVR_EXCL_START
  {
    return NULL; // snprintf failed
  } // GCOVR_EXCL_STOP

  //Casting is safe here because we know length is non-negative
  size_t alloc_size = (size_t) length + 1; // +1 for the null terminator
  char *greeting = malloc(alloc_size);


  if (greeting == NULL) // GCOVR_EXCL_START
  {
    return NULL; // Memory allocation failed
  }  // GCOVR_EXCL_STOP


  // Create the greeting message
  snprintf(greeting, alloc_size, "Hello, %s!", name);

  return greeting;
}

// Function accepts two numbers and returns a product
int multiply(int first, int second)
{
    return first * second;
}

/**
 * @brief Calculates the sum of two integers.
 *
 * This function started as the intentionally incorrect function (1 was added to the result to give a wrong answer)
 * used during the debugging exercise and was corrected for the final submission.
 *
 * @param first The first integer.
 * @param second The second integer.
 * @return The sum of first and second.
 *
 */

int incorrect_sum(int first, int second)
{
    return first + second;
}
