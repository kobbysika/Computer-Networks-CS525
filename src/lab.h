#ifndef LAB_H
#define LAB_H

/** 
 * @brief Returns a greeting message.
 *
 * This function returns a string that contains a greeting message.
 * The string is allocated with malloc and should be freed by the caller.
 * @param name The name to include in the greeting.
 * @return A greeting string.
 * 
 * @note AI usage: ChatGPT assisted with understanding the memory leaks required by Task 4.
 * 
 */
char* get_greeting(const char* restrict name);

/**
 * @brief Returns the product of two integers.
 *
 * @param first The first integer.
 * @param second The second integer.
 * @return The product of the two integers.
 */
int multiply(int first, int second);

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
int incorrect_sum(int first, int second);


#endif // LAB_H
