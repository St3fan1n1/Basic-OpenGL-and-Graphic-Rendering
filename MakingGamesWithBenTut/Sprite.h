#pragma once

class Sprite
{
public:
    Sprite();
    ~Sprite();

    void init(int x, int y, int width, int height);
    void draw();

private:
    int _x;
    int _y;
    int _width;
    int _height;
};