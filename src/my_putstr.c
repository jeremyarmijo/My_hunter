/*
** EPITECH PROJECT, 2023
** my_putstr
** File description:
** Displays all the char of a str
*/
#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++){
        my_putchar(str[i]);
    }
    return 1;
}
