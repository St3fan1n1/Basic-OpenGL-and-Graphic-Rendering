# **Basic OpenGL and Graphic Rendering**

In this project I will be following ***Learning Modern 3D Graphics Programming by*** *Jason L. McKesson*. 

# Graphics and Rendering
Every that is rendered in a screen comes from a 2D array of ***pixels***. The word pixel comes from the term **Pic**ture **El**ement.

![Pixelated Image Example](ImgExample.png)

Every square present in this image can be seen as a pixel with its own set of coordinates.

But what if we want to print a 3D world to the screen? Well this is where it gets more complex. This proccess of converting a #d world to a 2D image to print to the screen is called ***rendering***. The actual proccess of for rendering in real-time is ***rasterization***, and a rendering system that uses rasterization is called ***rasterizer***.

Rasterization works by treating the object as a mesh of polygons. A ***mesh*** is a series of of adjacent triangles that define the outer surface of the object. The terms ***geometry***, ***model*** or ***mesh*** are used interchangeably.

## **Trieangles and vertices**
A triangle consist of 3 vertices. A ***vertex*** is a collection of information or data. Each vertex can contain a lot of information (position, color, etc), but it must at least contain the position of the vertex. This data consist of 3 three-dimentional points. It is commonly represented by (X, Y, Z). 
