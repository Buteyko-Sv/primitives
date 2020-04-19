#ifndef LINE_2D
#define LINE_2D

#include "Vector2D.h"
#include <math.h>
#include <GL/glut.h>

class Line2D
{
public:
    //������������
    Line2D();
    Line2D(Vector2D C1, Vector2D C2);
    Line2D(Vector2D C1, Vector2D C2, double red_color, double green_color, double blue_color);

    //����������
    ~Line2D();

    //��������� ��������� ������ � ����� �����
    Vector2D getC1() const;
    Vector2D getC2() const;

    //��������� ����� �����
    double getLength() const;

    //��������� ������
    double getRed() const;
    double getBlue() const;
    double getGreen() const;

    //������������ ��������� ������
    void setC1(Vector2D C1);
    void setC2(Vector2D C2);

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
    void drawLineWidth(float width); //��������� ����� ��������� ������
    void drawLine();

private:
    double red_color=1;
    double blue_color=1;
    double green_color=1;
    Vector2D C1;
    Vector2D C2;
};

#endif // LINE_2D
