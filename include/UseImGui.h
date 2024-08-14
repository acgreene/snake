//
// Created by alecgreene on 8/13/24.
//

#pragma once
#ifndef USE_IMGUI_H
#define USE_IMGUI_H

#include "glad/glad.h"
#include "GLFW/glfw3.h"

// A class that wraps ImGui setup and rendering
class UseImGui
{
  public:
    /**
     * @brief Initializes ImGui for use with GLFW and OpenGL.
     *
     * Sets up ImGui by creating a context, configuring I/O settings,
     * and initializing platform and renderer bindings. Applies a dark
     * theme to ImGui.
     *
     * @param window Pointer to the GLFW window that ImGui will use for input.
     * @param glsl_version String specifying the GLSL version to use with OpenGL.
     */
    static void Init(GLFWwindow *window, const char *glsl_version);

    /**
     * @brief Starts a new ImGui frame.
     *
     * Initializes a new ImGui frame by calling the appropriate functions
     * to prepare for rendering.
     */
    static void NewFrame();

    /**
     * @brief Updates the ImGui GUI.
     *
     * Where you should add or update ImGui widgets and layout elements.
     * This function is intended to be used after NewFrame() and before
     * Render().
     */
    static void Update();

    /**
     * @brief Renders the ImGui GUI.
     *
     * Renders the current ImGui frame and draws it using OpenGL.
     */
    static void Render();

    /**
     * @brief Shuts down ImGui and cleans up resources.
     *
     * Cleans up ImGui resources and shuts down platform and renderer
     * bindings.
     */
    static void Shutdown();
};

#endif // USE_IMGUI_H
