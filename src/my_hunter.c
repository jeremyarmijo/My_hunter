/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** video_game
*/
#include "my.h"

int main(int ac, char **av)
{
    if (ac == 2)
        if (av[1][0] == '-' && av[1][1] == 'h'){
            my_putstr("you will play a game in which you have to shoot a ");
            my_putstr("duck.");
            my_putstr(" All the ducks will appear on the left side of the");
            my_putstr("screen and disappear on the left side of the screen");
            my_putstr("and disappear to the right if you don't shoot them");
            my_putstr("before.");
            my_putstr("\n");
            my_putstr("if you want to exit, press ESCAPE key and to shoot");
            my_putstr(" the duck, use your mouse.");
            my_putstr("\n");
        }
    if (ac == 1)
        openwindow();
    return 0;
}
