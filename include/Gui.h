//
// Created by alecgreene on 8/16/24.
//

#ifndef GUI_H
#define GUI_H

#include <SDL2/SDL.h>

class Gui
{
  public:
    bool init();
    void update() const;
    void render() const;
    void quit();

  private:
    const int m_screen_width = 1440;
    const int m_screen_height = 1080;

    SDL_Window *m_window = nullptr;
    SDL_Surface *m_screen_surface = nullptr;
};

#endif // GUI_H
