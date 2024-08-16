//
// Created by alecgreene on 8/16/24.
//

#include "Gui.h"

bool Gui::init()
{
    // Initialize SDL using SDL's video subsystem
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        // SDL error will let you know if any errors happened inside of any SDL function
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return false;
    }

    // SDL was initialized successfully, make window
    m_window = SDL_CreateWindow("Snake", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                m_screen_width, m_screen_height, SDL_WINDOW_SHOWN);
    if (m_window == nullptr)
    {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        return false;
    }

    // Get window surface
    m_screen_surface = SDL_GetWindowSurface(m_window);

    return true;
}

void Gui::update() const
{
    // Fill the surface white
    SDL_FillRect(m_screen_surface, nullptr,
                 SDL_MapRGB(m_screen_surface->format, 0xFF, 0xFF, 0xFF));
}

void Gui::render() const
{
    // Update the surface
    SDL_UpdateWindowSurface(m_window);
}

void Gui::quit()
{
    // Destroy window
    SDL_DestroyWindow(m_window);
    m_window = nullptr;

    // Quit SDL subsystems
    SDL_Quit();
}
