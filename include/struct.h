/*
** EPITECH PROJECT, 2023
** struct
** File description:
** hunter
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
#ifndef S_H
    #define S_H
typedef struct variable{
    sfVector2f posbutton;
    sfVector2f scalebis;
} variable;

typedef struct open_s{
    sfVideoMode video_mode;
    sfEvent event;
    sfColor sfBlack;
} open_t;

typedef struct duck_info{
    sfVector2f posduck;
    sfIntRect rectsprite;
    sfTime time;
    float seconds;
    sfClock *clock;
    sfFloatRect hitbox;
    sfVector2i mouse;
} duck_info;

typedef struct my_bool_s{
    int bool_x;
    int bool_y;
    int booldraw;
} my_bool_t;


#endif
