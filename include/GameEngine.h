//
// Created by alecgreene on 8/16/24.
//

#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "Gui.h"

class GameEngine
{
  public:
    GameEngine() : m_gui(new Gui())
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
};

#endif // GAMEENGINE_H
