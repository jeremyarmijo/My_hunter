/*
** EPITECH PROJECT, 2023
** header
** File description:
** f
*/
#include <stdio.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>

#include <SFML/Window.h>
#include <SFML/Graphics/BlendMode.h>
#include <SFML/Graphics/CircleShape.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/ConvexShape.h>
#include <SFML/Graphics/Font.h>
#include <SFML/Graphics/FontInfo.h>
#include <SFML/Graphics/Glyph.h>
#include <SFML/Graphics/Image.h>
#include <SFML/Graphics/PrimitiveType.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/RectangleShape.h>
#include <SFML/Graphics/RenderStates.h>
#include <SFML/Graphics/RenderTexture.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Shader.h>
#include <SFML/Graphics/Shape.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Text.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Transform.h>
#include <SFML/Graphics/Transformable.h>
#include <SFML/Graphics/Vertex.h>
#include <SFML/Graphics/VertexArray.h>
#include <stdlib.h>
#include <unistd.h>
#include "struct.h"

#ifndef F_H
    #define F_H
    #define W_1 sfRenderWindow *window
    #define HITB_1 &duck->hitbox
    #define P_D_1 duck->mouse.x
    #define W_V1 win.video_mode
    #define SET_TEX1 sfTexture *starttexture
    #define SPRIT_1 sfSprite *ducksprite

int my_putstr(char const *str);
void my_putchar(char c);
void posduck_x(W_1, SPRIT_1, duck_info *duck, my_bool_t *truefalse);
void posduck_x_bis(W_1, SPRIT_1, my_bool_t *truefalse);
void clickstart(sfRenderWindow *window, sfEvent event);
void openwindow(void);
void printstart(sfRenderWindow *window);
void posduck_y_bis(duck_info *duck, my_bool_t *truefalse);
void posduck_y(duck_info *duck, my_bool_t *truefalse);
void menu(sfRenderWindow *window);
void printfond(sfRenderWindow *window);
void shootduck(W_1, duck_info *duck, my_bool_t *truefalse, SPRIT_1);
void timefunc(duck_info *duck);
void game(sfEvent event, W_1, duck_info *duck, my_bool_t *truefalse);
void callgame(sfEvent event, W_1, duck_info *duck, my_bool_t *truefalse);
void mouvduck(duck_info *duck);
void closewin_menu(W_1, open_t win);

#endif
