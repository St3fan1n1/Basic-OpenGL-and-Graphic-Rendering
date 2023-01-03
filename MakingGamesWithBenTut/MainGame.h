#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <string>

class MainGame
{
public:
    MainGame();
    ~MainGame();

    void run();

private:
    void init();

    void gameLoop();

    void fatalError(std::string errorString);

    GLFWwindow* window;
    int screenWidth;
    int screenHeight;

    GLuint VBO, VAO;
    GLuint shaderProgram;

    bool shouldQuit;

    const GLchar* vertexShaderSource = "#version 330 core\n"
                                    "layout(location = 0) in vec3 position;\n"
                                    "void main()\n"
                                    "{\n"
                                    "gl_Position = vec4(position.x, position.y, position.z, 1.0);\n"
                                    "}\0";

    const GLchar* fragmentShaderSource = "#version 330 core\n"
                                    "out vec4 color;\n"
                                    "void main()\n"
                                    "{\n"
                                    "color = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
                                    "}\n";

};