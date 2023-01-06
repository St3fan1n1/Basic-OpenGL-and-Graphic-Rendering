cmake_minimum_required(VERSION 3.17)

project(Game)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(${PROJECT_NAME} main.cpp MainGame.cpp Sprite.cpp)

# glfw
find_package(glfw3 REQUIRED)
link_libraries(${GLFW_LIBRARY_DIRS})

# glew
find_package(GLEW REQUIRED)
link_libraries(${GLEW_LIBRARY_DIRS})

# opengl
find_package(OpenGL REQUIRED)
link_libraries(${OPENGL_LIBRARY_DIRS})

target_link_libraries(${PROJECT_NAME} glfw ${GLEW_LIBRARIES} ${OPENGL_LIBRARIES})