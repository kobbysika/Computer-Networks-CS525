#ifndef LAB_H
#define LAB_H

/** * @brief Returns a greeting message.
 *
 * This function returns a string that contains a greeting message.
 * The string is allocated with malloc and should be freed by the caller.
 * @param name The name to include in the greeting.
 * @return A greeting string.
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
 * @brief Returns an intentionally incorrect sum of two integers.
 *
 * @param first The first integer.
 * @param second The second integer.
 * @return An intentionally incorrect sum.
 */
int incorrect_sum(int first, int second);


#endif // LAB_H
