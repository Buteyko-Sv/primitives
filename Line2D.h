#ifndef LINE_2D
#define LINE_2D

#include "Vector2D.h"
#include <math.h>
#include <GL/glut.h>

class Line2D
{
public:
    //конструкторы
    Line2D();
    Line2D(Vector2D C1, Vector2D C2);
    Line2D(Vector2D C1, Vector2D C2, double red_color, double green_color, double blue_color);

    //деструктор
    ~Line2D();

    //плучениие координат начала и конца линии
    Vector2D getC1() const;
    Vector2D getC2() const;

    //получение длины линии
    double getLength() const;

    //получение цветов
    double getRed() const;
    double getBlue() const;
    double getGreen() const;

    //установление координат вершин
    void setC1(Vector2D C1);
    void setC2(Vector2D C2);

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
    void drawLineWidth(float width); //рисование линни указанной ширины
    void drawLine();

private:
    double red_color=1;
    double blue_color=1;
    double green_color=1;
    Vector2D C1;
    Vector2D C2;
};

#endif // LINE_2D
