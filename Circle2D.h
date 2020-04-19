#ifndef CIRCLE_2D
#define CIRCLE_2D

#include "Vector2D.h"
#include <math.h>
#include <GL/glut.h>

class Circle2D
{
public:
    //������������
    Circle2D();
    Circle2D(double rad, Vector2D Center);
    Circle2D(double rad, Vector2D Center, double red_color, double green_color, double blue_color);

    //����������
    ~Circle2D();

    Vector2D getCenter() const;
    double getRad() const;

    //��������� ������
    double getRed() const;
    double getBlue() const;
    double getGreen() const;

    void setCenter(Vector2D Center);
    void setRad(double rad);
    void setColor(double red_color, double green_color, double blue_color);

    //��������
    //����� �� �������� A
    void positionLeft(double A);
    void positionRight(double A);
    void positionUp(double A);
    void positionDown(double A);
    //����� �� �������� �,�
    void position(double x, double y);

    void drawBorder(double width);
    void drawCircle();

private:
    double rad=0;
    Vector2D Center;
    double red_color=1,green_color=1, blue_color=1;
};

#endif // CIRCLE_2D
