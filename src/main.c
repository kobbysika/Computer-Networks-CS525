#include "lab.h"
#include <stdio.h>
#include <stdlib.h>

#ifdef TEST
#define main main_exclude
#endif

/**
 * @brief Documents AI assistance used during Task 4.
 *
 * @note AI usage: ChatGPT assisted with understanding the memory leaks required by Task 4.
 * 
 */

int main(void)
{
    char *greeting = get_greeting("World");
    if (greeting) {
        printf("%s\n", greeting);
        free(greeting); // Free the allocated memory for the greeting
    } else {
        printf("Failed to create greeting.\n");
    }
    return 0;
}