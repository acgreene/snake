//
// Created by alecgreene on 8/14/24.
//

#include "Game.h"

void Game::run()
{
    init();

    while (!glfwWindowShouldClose(window))
    {
        handleInput();
        update();
        render();
    }

    // Cleanup and shutdown
}

void Game::init()
{
    // Initialize GLFW, ImGui, and other resources
}

void Game::handleInput()
{
    // Handle user input
    if (gameState.getState() == GameState::Playing)
    {
        // Handle snake movement
    }
}

void Game::update()
{
    /*
    if (gameState.getState() == GameState::Playing)
    {
        snake.move();
        if (snake.checkCollision(screenWidth, screenHeight))
        {
            gameState.setState(GameState::GameOver);
        }
    }
    */
}

void Game::render()
{
    /*
        glClear(GL_COLOR_BUFFER_BIT);
        UseImGui::NewFrame();

        if (gameState.getState() == GameState::MainMenu)
        {
            // Render main menu
        }
        else if (gameState.getState() == GameState::Playing)
        {
            snake.render();
        }
        else if (gameState.getState() == GameState::GameOver)
        {
            // Render game over screen
        }

        UseImGui::Render();
        glfwSwapBuffers(window);
        */
}