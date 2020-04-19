#ifndef TRIANGLE_2D
#define TRIANGLE_2D

#include "Vector2D.h"
#include <math.h>
#include <GL/glut.h>

class Triangle2D
{
public:
    //������������
    Triangle2D();
    Triangle2D(Vector2D C1, Vector2D C2, Vector2D C3);
    Triangle2D(Vector2D C1, Vector2D C2, Vector2D C3, double red_color, double green_color, double blue_color);

    //����������
    ~Triangle2D();

    Vector2D getC1() const;
    Vector2D getC2() const;
    Vector2D getC3() const;

    double getLength(Vector2D V1, Vector2D V2) const;
    double getArea() const;

    //��������� ������
    double getRed() const;
    double getBlue() const;
    double getGreen() const;

    //������������ ��������� ������
    void setC1(Vector2D C1);
    void setC2(Vector2D C2);
    void setC3(Vector2D C3);

    //������������ �����
    void setColor(double red_color, double green_color, double blue_color);

    //��������
    //����� �� �������� A
    void positionLeft(double A);
    void positionRight(double A);
    void positionUp(double A);
    void positionDown(double A);
    //����� �� �������� �,�
    void position(double x, double y);


    //���������
    void drawBorder(float width); //��������� ����� ��������� ������
    void drawTriangle();

private:
    Vector2D C1, C2, C3;
    double red_color=1,green_color=1, blue_color=1;
};

#endif // TRIANGLE_2D
