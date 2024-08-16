//
// Created by alecgreene on 8/16/24.
//

#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "Gui.h"
#include "Snake.h"

class GameEngine
{
  public:
    GameEngine() : m_gui(new Gui()), m_snake(new Snake())
    {
    }

    ~GameEngine()
    {
        delete m_gui;
    }

    [[nodiscard]] bool init() const;
    void run() const;
    void end() const;

    enum GameState
    {
        Menu,
        Playing,
        Paused,
        GameOver,
    };

  private:
    GameState m_current_state = Playing;
    Gui *m_gui;
    Snake *m_snake;
};

#endif // GAMEENGINE_H
