#include <iostream>
#include <cmath>

class Vector2D{
private:
    double x;
    double y;

public:
    Vector2D() : x(0), y(0){};
    Vector2D(double x, double y) : x(x), y(y){};

    double get_x() const
    {
        return x;
    }
    double get_y() const
    {
        return y;
    }

    void print()
    {
        std::cout << "X: " << x << std::endl;
        std::cout << "Y: " << y << std::endl;
    }

    double lenght()
    {
        return std::sqrt(x*x + y*y);
    }
    double lenght(int precision)
    {
        double factor = std::pow(10.0, precision);
        return std::round(std::sqrt(x*x + y*y) * factor) / factor;
    }

    void operator+=(const Vector2D &v)
    {
        this->x += v.get_x();
        this->y += v.get_y();
    }

    bool operator==(const Vector2D &v)
    {
        if ((v.get_x() - 0.01) < this->x && (v.get_x() + 0.01) > this->x)
        {
            return true;
        }
        if ((v.get_y() - 0.01) < this->y && (v.get_y() + 0.01) > this->y)
        {
            return true;
        }
        else 
        return false;
    }
    bool operator!=(const Vector2D &v)
    {
        if ((v.get_x() - 0.01) < this->x && (v.get_x() + 0.01) > this->x)
        {
            return false;
        }
        if ((v.get_y() - 0.01) < this->y && (v.get_y() + 0.01) > this->y)
        {
            return false;
        }
        else 
        return true;
    }
};

Vector2D operator*(const Vector2D &v, const int f)
{
    return Vector2D(v.get_x() * f, v.get_y() * f);
}
Vector2D operator*( const int f, const Vector2D &v)
{
    return Vector2D(v.get_x() * f, v.get_y() * f);
}

Vector2D operator+(const Vector2D &v, const Vector2D &d)
{
    return Vector2D(v.get_x() + d.get_x(), v.get_y() + d.get_y());
}

int main()
{
    Vector2D c(3.5, 4.5);
    Vector2D e(3.5, 4.5);

    Vector2D vec3 = c + e;
    vec3.print();

    c = c * 5;
    c.print();
   
    Vector2D vec1(3.5, 4.5);
    std::cout << (vec1 == e) << std::endl;
    std::cout << (vec1 != e) << std::endl;
    return 1;
}