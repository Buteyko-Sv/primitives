#ifndef RECTANGLE_2D
#define RECTANGLE_2D

#include "Vector2D.h"
#include <math.h>
#include <GL/glut.h>

class Rectangle2D
{
public:
    //конструкторы
    Rectangle2D();
    Rectangle2D(Vector2D C1, Vector2D C2, Vector2D C3, Vector2D C4);
    Rectangle2D(Vector2D C1, Vector2D C2, Vector2D C3, Vector2D C4, double red_color, double green_color, double blue_color);

    //деструктор
    ~Rectangle2D();

    Vector2D getC1() const;
    Vector2D getC2() const;
    Vector2D getC3() const;
    Vector2D getC4() const;

    double getLength(Vector2D V1, Vector2D V2) const;

    //получение цветов
    double getRed() const;
    double getBlue() const;
    double getGreen() const;

    //установление координат вершин
    void setC1(Vector2D C1);
    void setC2(Vector2D C2);
    void setC3(Vector2D C3);
    void setC4(Vector2D C4);

    //установление цвета
    void setColor(double red_color, double green_color, double blue_color);

    //движение
    //сдвиг на значение A
    void positionLeft(double A);
    void positionRight(double A);
    void positionUp(double A);
    void positionDown(double A);
    //сдвиг на величину х,у
    void position(double x, double y);


    //рисование
    void drawBorder(float width); //рисование линни указанной ширины
    void drawRectangle();

private:
    Vector2D C1, C2, C3, C4;
    double red_color=1,green_color=1, blue_color=1;
};

#endif // RECTANGLE_2D

