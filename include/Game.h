//
// Created by alecgreene on 8/14/24.
//

#pragma once
#ifndef GAME_H
#define GAME_H

#include "GameState.h"
#include "Snake.h"
#include "UseImGui.h"

class Game
{
  public:
    Game();
    void run();

  private:
    /**
     * @brief performs the initial setup for executing the game.
     *
     * Initializes the GLFW window with an OpenGL 3.0 context, sets up vertical
     * synchronization, and configures the viewport based on the window's framebuffer size.
     * Loads OpenGL functions using GLAD and ensures the context is properly tied to the
     * created window.
     */
    void init();
    void handleInput();
    void update();
    void render();

    GLFWwindow *window;
    Snake snake;
    GameState gameState;
    int screenWidth, screenHeight;
};

#endif // GAME_H
