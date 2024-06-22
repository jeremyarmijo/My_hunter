/*
** EPITECH PROJECT, 2023
** hunter
** File description:
** open window
*/
#include "my.h"

variable print = {{820, 450}, {10, 10}};

void printfond(sfRenderWindow *window)
{
    sfTexture *texturefond = sfTexture_createFromFile(
        "pictures/fond.png", NULL);
    sfSprite *spritefond = sfSprite_create();

    sfSprite_setTexture(spritefond, texturefond, sfTrue);
    sfRenderWindow_drawSprite(window, spritefond, NULL);
}

void printstart(sfRenderWindow *window)
{
    sfSprite *startsprite = sfSprite_create();

    SET_TEX1 = sfTexture_createFromFile("pictures/start-button.png", NULL);
    sfSprite_setTexture(startsprite, starttexture, sfTrue);
    sfSprite_setScale(startsprite, print.scalebis);
    sfSprite_setPosition(startsprite, print.posbutton);
    sfRenderWindow_drawSprite(window, startsprite, NULL);
}
