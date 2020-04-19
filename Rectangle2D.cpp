#include "Rectangle2D.h"

Rectangle2D :: Rectangle2D()
{
    this->C1.setX(0);
    this->C2.setX(0);
    this->C3.setX(0);
    this->C4.setX(0);
    this->C1.setY(0);
    this->C2.setY(0);
    this->C3.setY(0);
    this->C4.setY(0);
}
Rectangle2D :: Rectangle2D(Vector2D C1, Vector2D C2, Vector2D C3, Vector2D C4)
{
    this->C1=C1;
    this->C2=C2;
    this->C3=C3;
    this->C4=C4;
}
Rectangle2D :: Rectangle2D(Vector2D C1, Vector2D C2, Vector2D C3, Vector2D C4, double red_color, double green_color, double blue_color)
{
    this->C1=C1;
    this->C2=C2;
    this->C3=C3;
    this->C4=C4;
    this->red_color=red_color;
    this->green_color=green_color;
    this->blue_color=blue_color;
}

    //деструктор
Rectangle2D :: ~Rectangle2D(){};

Vector2D Rectangle2D :: getC1() const
{
    return this->C1;
}
Vector2D Rectangle2D :: getC2() const
{
    return this->C2;
}
Vector2D Rectangle2D :: getC3() const
{
    return this->C3;
}
Vector2D Rectangle2D :: getC4() const
{
    return this->C4;
}

double Rectangle2D :: getLength(Vector2D V1, Vector2D V2) const
{
    return sqrt((V1.getX()-V2.getX())*(V1.getX()-V2.getX())+(V1.getY()-V2.getY())*(V1.getY()-V2.getY()));
}


    //получение цветов
double Rectangle2D :: getRed() const
{
    return this->red_color;
}
double Rectangle2D :: getBlue() const
{
    return this->blue_color;
}
double Rectangle2D :: getGreen() const
{
    return this->green_color;
}

    //установление координат вершин
void Rectangle2D :: setC1(Vector2D C1)
{
    this->C1=C1;
}
void Rectangle2D :: setC2(Vector2D C2)
{
    this->C2=C2;
}
void Rectangle2D :: setC3(Vector2D C3)
{
    this->C3=C3;
}
void Rectangle2D :: setC4(Vector2D C4)
{
    this->C4=C4;
}

    //установление цвета
void Rectangle2D :: setColor(double red_color, double green_color, double blue_color)
{
    this->red_color=red_color;
    this->green_color=green_color;
    this->blue_color=blue_color;
}

    //движение
    //сдвиг на значение A
void Rectangle2D :: positionLeft(double A)
{
    this->C1.setX(this->C1.getX()-A);
    this->C2.setX(this->C2.getX()-A);
    this->C3.setX(this->C3.getX()-A);
    this->C4.setX(this->C4.getX()-A);
}
void Rectangle2D :: positionRight(double A)
{
    this->C1.setX(this->C1.getX()+A);
    this->C2.setX(this->C2.getX()+A);
    this->C3.setX(this->C3.getX()+A);
    this->C4.setX(this->C4.getX()+A);
}
void Rectangle2D :: positionUp(double A)
{
    this->C1.setY(this->C1.getY()+A);
    this->C2.setY(this->C2.getY()+A);
    this->C3.setY(this->C3.getY()+A);
    this->C4.setY(this->C4.getY()+A);
}
void Rectangle2D :: positionDown(double A)
{
    this->C1.setY(this->C1.getY()-A);
    this->C2.setY(this->C2.getY()-A);
    this->C3.setY(this->C3.getY()-A);
    this->C4.setY(this->C4.getY()-A);
}
    //сдвиг на величину х,у
void Rectangle2D :: position(double x, double y)
{
    this->C1.setX(this->C1.getX()+x);
    this->C2.setX(this->C2.getX()+x);
    this->C3.setX(this->C3.getX()+x);
    this->C4.setX(this->C4.getX()+x);
    this->C1.setY(this->C1.getY()+y);
    this->C2.setY(this->C2.getY()+y);
    this->C3.setY(this->C3.getY()+y);
    this->C4.setY(this->C4.getY()+y);
}


    //рисование
void Rectangle2D :: drawBorder(float width) //рисование линни указанной ширины
{
    glLineWidth(width);
    glBegin(GL_LINES);

    glColor3d(red_color, green_color, blue_color);
    glVertex2d(C1.getX(), C1.getY());
    glVertex2d(C2.getX(), C2.getY());

    glVertex2d(C2.getX(), C2.getY());
    glVertex2d(C3.getX(), C3.getY());

    glVertex2d(C3.getX(), C3.getY());
    glVertex2d(C4.getX(), C4.getY());

    glVertex2d(C1.getX(), C1.getY());
    glVertex2d(C4.getX(), C4.getY());

    glEnd();
}
void Rectangle2D :: drawRectangle()
{
    glColor3d(red_color, green_color, blue_color);

    glBegin(GL_QUADS);

    glVertex2d(this->C1.getX(), this->C1.getY());
    glVertex2d(this->C2.getX(), this->C2.getY());
    glVertex2d(this->C3.getX(), this->C3.getY());
    glVertex2d(this->C4.getX(), this->C4.getY());

    glEnd();
}
