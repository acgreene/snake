//
// Created by alecgreene on 8/12/24.
//

#include "Snake.h"
#include "UseImGui.h"

#include <stdexcept>

int main()
{
    /**
     * Initializes the GLFW library, which is used to create windows and handle input in
     * OpenGL applications. If the initialization fails (returns false), the program will
     * exit with a return code of 1.
     */
    if (!glfwInit())
    {
        return 1;
    }

    /**
     * Defines the version of the OpenGL Shading Language (GLSL) that will be used in the shaders.
     * "#version 130" corresponds to OpenGL 3.0
     */
    const char *glsl_version = "#version 130";

    // Set the required OpenGL version as OpenGL 3.0 for the context created by GLFW
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    // Create window with graphics context
    GLFWwindow *window = glfwCreateWindow(1280, 720, "Snake", nullptr, nullptr);

    // Exit if the window creation fails
    if (window == nullptr)
    {
        return 1;
    }

    /**
     * Makes the OpenGL context of the specified window (window) the current context on the calling
     * thread. All subsequent OpenGL calls will affect this context.
     */
    glfwMakeContextCurrent(window);

    /**
     * Enables vertical synchronization (V-Sync), which synchronizes the frame rate of the
     * application with the monitor's refresh rate to prevent screen tearing. A value of 1
     * means V-Sync is enabled.
     */
    glfwSwapInterval(1);

    /**
     * GLAD is used to load OpenGL function pointers. gladLoadGLLoader loads all the required
     * OpenGL functions for the current context.
     * glfwGetProcAddress is used to get the function addresses for OpenGL.
     */
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        throw std::runtime_error("Unable to context to OpenGL");
    }

    /**
     * Retrieves the size of the framebuffer (the drawable area of the window) in pixels
     * and stores it in screen_width and screen_height.
     */
    int screen_width, screen_height;
    glfwGetFramebufferSize(window, &screen_width, &screen_height);

    /**
     * Sets the OpenGL viewport, which defines the area of the window where OpenGL will render. The parameters (0, 0)
     * set the lower-left corner of the viewport, and (screen_width, screen_height) define the width and height of the
     * viewport in pixels.
     */
    glViewport(0, 0, screen_width, screen_height);

    UseImGui gui;
    UseImGui::Init(window, glsl_version);
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        glClear(GL_COLOR_BUFFER_BIT);
        UseImGui::NewFrame();
        gui.Update();
        UseImGui::Render();
        glfwSwapBuffers(window);
    }
    UseImGui::Shutdown();

    return 0;
}
