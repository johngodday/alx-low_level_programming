#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase.
 *
 * Description: Uses the holberton header file, that brings in the _putchar
 *  funtction.
 * Return: void.
 */

void print_alphabet(){
        char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
        int i;
        for(i= 0; i<=26; i++){
            _putchar(alpha[i]);
        }
        _putchar("\n");
}
