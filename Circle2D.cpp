#include "Circle2D.h"

Circle2D :: Circle2D()
{
    this->Center.setX(0);
    this->Center.setY(0);
}
Circle2D :: Circle2D(double rad, Vector2D Center)
{
    this->Center=Center;
    this->rad=rad;
}
Circle2D :: Circle2D(double rad, Vector2D Center, double red_color, double green_color, double blue_color)
{
    this->Center=Center;
    this->rad=rad;
    this->red_color=red_color;
    this->green_color=green_color;
    this->blue_color=blue_color;
}

    //деструктор
Circle2D :: ~Circle2D(){}

Vector2D Circle2D :: getCenter() const
{
    return this->Center;
}
double Circle2D :: getRad() const
{
    return this->rad;
}

    //получение цветов
double Circle2D :: getRed() const
{
    return this->red_color;
}
double Circle2D :: getBlue() const
{
    return this->blue_color;
}
double Circle2D :: getGreen() const
{
    return this->green_color;
}

void Circle2D :: setCenter(Vector2D Center)
{
    this->Center=Center;
}
void Circle2D :: setRad(double rad)
{
    this->rad=rad;
}
void Circle2D :: setColor(double red_color, double green_color, double blue_color)
{
    this->red_color=red_color;
    this->green_color=green_color;
    this->blue_color=blue_color;
}

    //движение
    //сдвиг на значение A
void Circle2D :: positionLeft(double A)
{
    this->Center.setX(this->Center.getX()+A);
}
void Circle2D :: positionRight(double A)
{
    this->Center.setX(this->Center.getX()-A);
}
void Circle2D :: positionUp(double A)
{
    this->Center.setY(this->Center.getY()+A);
}
void Circle2D :: positionDown(double A)
{
    this->Center.setY(this->Center.getY()-A);
}
    //сдвиг на величину х,у
void Circle2D :: position(double x, double y)
{
    this->Center.setX(this->Center.getX()+x);
    this->Center.setY(this->Center.getY()+y);
}

void Circle2D :: drawBorder(double width)
{
    glLineWidth(width);

    glBegin(GL_LINE_LOOP);
    glColor3d(red_color, green_color, blue_color);
    for(int i=0; i<=100; i++)
    {
        double a=(float)i/ 100.0 * 3.141593 * 2.0;
        double x=rad*cos(a);
        double y=rad*sin(a);
        glVertex2d(this->Center.getX()+x, this->Center.getY()+y);
    }

    glEnd();
}
void Circle2D :: drawCircle()
{
    glColor3d(red_color, green_color, blue_color);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2d(this->Center.getX(), this->Center.getY()); // вершина в центре круга
    for(int i=0; i<=100; i++)
    {
        double a=(float)i/ 100.0 * 3.141593 * 2.0;
        double x=rad*cos(a);
        double y=rad*sin(a);
        glVertex2d(this->Center.getX()+x, this->Center.getY()+y);
    }

    glEnd();
}
