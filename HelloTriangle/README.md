# **HELLO TRIANGLE**

In this sevtion I will be learning the basics of window creation using GLFW and GLEW. I will also be learning the basics of displaying stuff to the screen.

```
glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
glClear(GL_COLOR_BUFFER_BIT);

glUseProgram(theProgram);

glBindBuffer(GL_ARRAY_BUFFER, positionBufferObject);
glEnableVertexAttribArray(0);
glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, 0, 0);

glDrawArrays(GL_TRIANGLES, 0, 3);

glDisableVertexAttribArray(0);
glUseProgram(0);

glfwSwapBuffers();
```

The first two lines of the code clear the screen. ***glClearColor*** sets the color that will be used when we clear the screen. Right now it is setting the color to black. ***glClear*** clears the screen. The ***GL_COLOR_BUFFER_BIT*** means that the clear call will affect the color buffer, clearing it with the color that we set in the previous function.

***glUseProgram*** set the current shader program to be used in the code that will come after. Later in the tutorials we will look into it more detail.

The next three commands set up the coordinates of the triangle to be rendered and tell OpenGL the location in memory.

The ***glDrawArray*** uses the current state to generate a stream of vertices that will form a triangle.

Next two lines are cleanup for the code that was writen before.

The last line, ***glfwSwapBuffer*** swaps the current buffer. The OpenGL framebuffer is a double-buffered. This means that the buffer that we are currently drawing to is not the buffer that is being shown to the user, so we need to change to that one after we finish drawing.