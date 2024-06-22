/*
** EPITECH PROJECT, 2023
** hunter
** File description:
** open window
*/
#include "my.h"

open_t win = {{1920, 1080, 32}, {}, {}};

void menu(sfRenderWindow *window)
{
    printfond(window);
    printstart(window);
}

void closewin_menu(W_1, open_t win)
{
    if (win.event.type == sfEvtClosed || win.event.key.code == sfKeyEscape)
        sfRenderWindow_close(window);
}

void openwindow(void)
{
    W_1 = sfRenderWindow_create(W_V1, "my hunter", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(window)){
        while (sfRenderWindow_pollEvent(window, &(win.event))){
            if (win.event.type == sfEvtClosed
                || win.event.key.code == sfKeyEscape)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, win.sfBlack);
        menu(window);
        sfRenderWindow_display(window);
        clickstart(window, win.event);
    }
    sfRenderWindow_destroy(window);
}
