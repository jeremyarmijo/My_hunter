/*
** EPITECH PROJECT, 2023
** hunter
** File description:
** game
*/
#include "my.h"

void posduck_x_bis(W_1, SPRIT_1, my_bool_t *truefalse)
{
    if (truefalse->booldraw == 0)
        sfRenderWindow_drawSprite(window, ducksprite, NULL);
}

void posduck_x(W_1, SPRIT_1, duck_info *duck, my_bool_t *truefalse)
{
    if (truefalse->bool_x == 0){
        if (duck->posduck.x < 1900){
            duck->posduck.x += 1;
            posduck_x_bis(window, ducksprite, truefalse);
        }
        if (duck->posduck.x == 1900){
            truefalse->bool_x = 1;
        }
    }
    if (truefalse->bool_x == 1){
        duck->posduck.x -= 1;
        if (duck->posduck.x == 0){
            truefalse->bool_x = 0;
            truefalse->booldraw = 0;
        }
    }
}

void posduck_y_bis(duck_info *duck, my_bool_t *truefalse)
{
    if (duck->posduck.y == 1000)
        truefalse->bool_y = 1;
}

void posduck_y(duck_info *duck, my_bool_t *truefalse)
{
    if (truefalse->bool_y == 0){
            if (duck->posduck.y <= 1000){
                duck->posduck.y += 1;
                posduck_y_bis(duck, truefalse);
            }
    }
    if (truefalse->bool_y == 1){
        duck->posduck.y -= 1;
        if (duck->posduck.y == 0)
            truefalse->bool_y = 0;
    }
}
