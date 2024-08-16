/*
 * use_imgui.cpp
 *
 * https://github.com/ocornut/imgui/wiki/Getting-Started#example-if-you-are-using-glfw--openglwebgl
 */

#include "UseImGui.h"

void UseImGui::init(GLFWwindow *window, const char *glsl_version)
{
    /**
     * This macro checks if the version of ImGui that you are linking against is
     * compatible with the version of the header files included in your project. It
     * ensures that there's no mismatch between the library and the headers.
     */
    IMGUI_CHECKVERSION();

    /**
     * This function creates the ImGui context, which is required before you can use any ImGui
     * functions. The context holds the state of ImGui, including settings and configuration
     * options.
     */
    ImGui::CreateContext();

    /**
     * This line retrieves a reference to the ImGuiIO structure, which contains all the
     * configuration settings and I/O handling data for ImGui. The io object will be used to
     * configure various aspects of ImGui's behavior.
     */
    ImGuiIO &io = ImGui::GetIO();

    // Enable Keyboard Controls
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;

    /**
     * This function initializes ImGui's platform binding to GLFW, which allows
     * ImGui to receive input events (like mouse and keyboard) from the specified GLFW window.
     * The second argument (true) indicates that ImGui will use the standard event callbacks
     * provided by GLFW.
     */
    ImGui_ImplGlfw_InitForOpenGL(window, true);

    /**
     * This function initializes ImGui's renderer binding for OpenGL 3, allowing ImGui to
     * render its UI using OpenGL. It takes the GLSL version string as an argument to ensure
     * compatibility with the shaders used in rendering.
     */
    ImGui_ImplOpenGL3_Init(glsl_version);
    ImGui::StyleColorsDark();
};

void UseImGui::newFrame()
{
    // Prepare a new ImGui frame for OpenGL rendering
    ImGui_ImplOpenGL3_NewFrame();

    // Prepare a new ImGui frame for GLFW window/input handling
    ImGui_ImplGlfw_NewFrame();

    // Start a new ImGui frame, allowing the creation of a new UI layout
    ImGui::NewFrame();
}

void UseImGui::update()
{
    // Do some stuff in the gui
}

void UseImGui::render()
{
    // Finalize the ImGui frame and prepare it for rendering
    ImGui::Render();

    // Render the ImGui draw data using OpenGL
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}

void UseImGui::shutdown()
{
    // Clean up resources used by the OpenGL backend for ImGui
    ImGui_ImplOpenGL3_Shutdown();

    // Clean up resources used by the GLFW backend for ImGui
    ImGui_ImplGlfw_Shutdown();

    // Destroy the ImGui context and release all related resources
    ImGui::DestroyContext();
}
