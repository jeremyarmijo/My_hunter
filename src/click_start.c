/*
** EPITECH PROJECT, 2023
** hunter
** File description:
** clisk to start
*/
#include "my.h"

void mouvduck(duck_info *duck)
{
    if (duck->rectsprite.left != 220){
        duck->rectsprite.left = duck->rectsprite.left + 110;
        } else {
            duck->rectsprite.left = 0;
        }
}

void timefunc(duck_info *duck)
{
    duck->time = sfClock_getElapsedTime(duck->clock);
        duck->seconds = duck->time.microseconds / 100000.0;
            if (duck->seconds > 1){
            mouvduck(duck);
            sfClock_restart(duck->clock);
            }
}

void shootduck(W_1, duck_info *duck, my_bool_t *truefalse, SPRIT_1)
{
    duck->hitbox = sfSprite_getGlobalBounds(ducksprite);
    duck->mouse = sfMouse_getPositionRenderWindow(window);
    if (sfMouse_isButtonPressed(sfMouseLeft)){
        if (sfFloatRect_contains(HITB_1, P_D_1, duck->mouse.y)){
            truefalse->booldraw = 1;
        }
    }
}

void callgame(sfEvent event, W_1, duck_info *duck, my_bool_t *truefalse)
{
    if (event.type == sfEvtMouseButtonPressed)
        game(event, window, duck, truefalse);
}

void clickstart(sfRenderWindow *window, sfEvent event)
{
    my_bool_t *truefalse = malloc(sizeof(my_bool_t *) * 1);
    duck_info *duck = malloc((sizeof(duck_info *)) * 1);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

    truefalse->bool_x = 0;
    truefalse->bool_y = 0;
    truefalse->booldraw = 0;
    duck->posduck.x = 0;
    duck->posduck.y = 0;
    duck->rectsprite.left = 0;
    duck->rectsprite.top = 0;
    duck->rectsprite.width = 110;
    duck->rectsprite.height = 110;
    if (mouse.x >= 844 && mouse.x <= 1096){
        if (mouse.y >= 470 && mouse.y <= 538){
            callgame(event, window, duck, truefalse);
        }
    }
}
