//
// Created by alecgreene on 8/12/24.
//

#include "snake.h"
#include "glad/glad.h"
#include "use_imgui.h"


int main()
{
    // Setup window
    if (!glfwInit())
        return 1;

    const char* glsl_version = "#version 130";
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    // Create window with graphics context
    GLFWwindow* window = glfwCreateWindow(1280, 720, "snake", nullptr, nullptr);
    if (window == nullptr)
        return 1;
    glfwMakeContextCurrent(window);

    // Enable vsync
    glfwSwapInterval(1);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) // tie window context to glad's opengl funcs
        throw("Unable to context to OpenGL");

    int screen_width, screen_height;
    glfwGetFramebufferSize(window, &screen_width, &screen_height);
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
