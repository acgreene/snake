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

    SDL_Event e;
    bool quit = false;

    // While application is running
    while (!quit)
    {
        // Handle events on queue
        while (SDL_PollEvent(&e) != 0)
        {
            // User requests quit
            if (e.type == SDL_QUIT)
            {
                quit = true;
            }
            m_snake->move(&e);
        }

        m_gui->render();
    }
}

void GameEngine::end() const
{
    m_gui->quit();
}
