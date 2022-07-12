#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char *len;
    char *len2;

    //len = _printf("Let's try to printf a simple sentence.\n");
    //len2 = printf("Let's try to printf a simple sentence.\n");

    len = "Lets try to printf a simple sentence.";
    len2 = "Let's try to printf a simple sentence.";

    printf("the sentence: %s\nthe second sentence: %s\n", len2, len);
    _printf("the sentence:%s\n", len2);
    return (0);
}
