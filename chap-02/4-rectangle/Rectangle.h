#pragma once

#include <ostream>

class Rectangle
{
public:
    Rectangle();
    Rectangle(float size);
    Rectangle(float length, float width);
    void scale(float ratio);

    float       get_length() const { return _length; }
    float       get_width() const { return _width; }
    static void set_default_size(float size);

private:
    static float _default_size;
    float        _length;
    float        _width;
};

std::ostream& operator<<(std::ostream& cout, const Rectangle& rectangle);