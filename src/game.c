/*
** EPITECH PROJECT, 2023
** hunter
** File description:
** videogame
*/

#include "my.h"

void closewindow(sfEvent event, sfRenderWindow *window)
{
    while (sfRenderWindow_pollEvent(window, &event)){
        if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
            sfRenderWindow_close(window);
    }
}

void game(sfEvent event, W_1, duck_info *duck, my_bool_t *truefalse)
{
    sfTexture *texturefond = sfTexture_createFromFile("pictures/fond2.png", NULL);
    sfSprite *spritefond = sfSprite_create();
    sfTexture *ducktexture = sfTexture_createFromFile("pictures/duck.png", NULL);
    sfSprite *ducksprite = sfSprite_create();

    sfSprite_setTexture(spritefond, texturefond, sfTrue);
    sfSprite_setTexture(ducksprite, ducktexture, sfTrue);
    duck->clock = sfClock_create();
    while (sfRenderWindow_isOpen(window)){
        closewindow(event, window);
        shootduck(window, duck, truefalse, ducksprite);
        timefunc(duck);
        sfRenderWindow_drawSprite(window, spritefond, NULL);
        posduck_x(window, ducksprite, duck, truefalse);
        posduck_y(duck, truefalse);
        sfSprite_setPosition(ducksprite, duck->posduck);
        sfSprite_setTextureRect(ducksprite, duck->rectsprite);
        sfRenderWindow_display(window);
    }
}
