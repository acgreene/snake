//
// Created by alecgreene on 8/16/24.
//

#include "GameEngine.h"

bool GameEngine::init() const
{
    if (!m_gui->init())
    {
        return false;
    }
    return true;
}

void GameEngine::run() const
{
    m_gui->update();

    m_gui->render();

    // Hack to get window to stay up
    SDL_Event e;
    bool quit = false;
    while (quit == false)
    {
        while (SDL_PollEvent(&e))
        {
            if (e.type == SDL_QUIT)
                quit = true;
        }
    }
}

void GameEngine::end() const
{
    m_gui->quit();
}
