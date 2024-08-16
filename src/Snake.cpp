//
// Created by alecgreene on 8/12/24.
//
#include "Snake.h"
#include <iostream>

void Snake::move(const SDL_Event *e)
{
    if (e->type == SDL_KEYDOWN)
    {
        switch (e->key.keysym.sym)
        {
        case SDLK_UP:
            std::cout << "Up" << std::endl;
            break;

        case SDLK_DOWN:
            std::cout << "Down" << std::endl;
            break;

        case SDLK_LEFT:
            std::cout << "Left" << std::endl;
            break;

        case SDLK_RIGHT:
            std::cout << "Right" << std::endl;
            break;

        default:
            std::cout << "Default movement" << std::endl;
            break;
        }
    }
}