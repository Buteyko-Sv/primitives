#include "Line2D.h"

Line2D :: Line2D()
{
    this->C1.setX(0);
    this->C1.setY(0);
    this->C2.setX(0);
    this->C2.setY(0);
}
Line2D :: Line2D(Vector2D C1, Vector2D C2)
{
    this->C1=C1;
    this->C2=C2;
}
Line2D :: Line2D(Vector2D C1, Vector2D C2, double red_color, double green_color, double blue_color)
{
    this->C1=C1;
    this->C2=C2;
    this->red_color=red_color;
    this->green_color=green_color;
    this->blue_color=blue_color;
}

    //деструктор
Line2D :: ~Line2D(){};

    //плучениие координат начала и конца линии
Vector2D Line2D :: getC1() const
{
    return this->C1;
}
Vector2D Line2D :: getC2() const
{
    return this->C2;
}

    //получение длины линии
double Line2D :: getLength() const
{
    return sqrt((this->C1.getX()-this->C2.getX())*(this->C1.getX()-this->C2.getX())+(this->C1.getY()-this->C2.getY())*(this->C1.getY()-this->C2.getY()));
}

    //получение цветов
double Line2D :: getRed() const
{
    return this->red_color;
}
double Line2D :: getBlue() const
{
    return this->blue_color;
}
double Line2D :: getGreen() const
{
    return this->green_color;
}

    //установление координат вершин
void Line2D :: setC1(Vector2D C1)
{
    this->C1=C1;
}
void Line2D :: setC2(Vector2D C2)
{
    this->C2=C2;
}

    //установление цвета
void Line2D :: setColor(double red_color, double green_color, double blue_color)
{
    this->red_color=red_color;
    this->green_color=green_color;
    this->blue_color=blue_color;
}

    //движение
    //сдвиг на значение A
void Line2D :: positionLeft(double A)
{
    this->C1.setX(this->C1.getX()-A);
    this->C2.setX(this->C2.getX()-A);
}
void Line2D :: positionRight(double A)
{
    this->C1.setX(this->C1.getX()+A);
    this->C2.setX(this->C2.getX()+A);
}
void Line2D :: positionUp(double A)
{
    this->C1.setY(this->C1.getY()+A);
    this->C2.setY(this->C2.getY()+A);
}
void Line2D :: positionDown(double A)
{
    this->C1.setY(this->C1.getY()-A);
    this->C2.setY(this->C2.getY()-A);
}
    //сдвиг на величину х,у
void Line2D :: position(double x, double y)
{
    this->C1.setX(this->C1.getX()+x);
    this->C2.setX(this->C2.getX()+x);
    this->C1.setY(this->C1.getY()+y);
    this->C2.setY(this->C2.getY()+y);
}


    //рисование
void Line2D :: drawLineWidth(float width)
{
    glLineWidth(width);

    glBegin(GL_LINES);

    glColor3d(red_color, green_color, blue_color);
    glVertex2d(C1.getX(), C1.getY());
    glColor3d(red_color, green_color, blue_color);
    glVertex2d(C2.getX(), C2.getY());
    glColor3d(red_color, green_color, blue_color);

    glEnd();
}

void Line2D :: drawLine()
{
    glBegin(GL_LINES);

    glColor3f(red_color, green_color, blue_color);
    glVertex2f(C1.getX(), C1.getY());
    glColor3f(red_color, green_color, blue_color);
    glVertex2f(C2.getX(), C2.getY());
    glColor3f(red_color, green_color, blue_color);

    glEnd();
}
