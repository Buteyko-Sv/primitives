#include "Triangle2D.h"

//конструкторы
Triangle2D :: Triangle2D()
{
    this->C1.setX(0);
    this->C2.setX(0);
    this->C3.setX(0);
    this->C1.setY(0);
    this->C2.setY(0);
    this->C3.setY(0);
}
Triangle2D :: Triangle2D(Vector2D C1, Vector2D C2, Vector2D C3)
{
    this->C1=C1;
    this->C2=C2;
    this->C3=C3;
}
Triangle2D :: Triangle2D(Vector2D C1, Vector2D C2, Vector2D C3, double red_color, double green_color, double blue_color)
{
    this->C1=C1;
    this->C2=C2;
    this->C3=C3;
    this->red_color=red_color;
    this->green_color=green_color;
    this->blue_color=blue_color;
}

    //деструктор
Triangle2D :: ~Triangle2D(){};

Vector2D Triangle2D :: getC1() const
{
    return this->C1;
}
Vector2D Triangle2D :: getC2() const
{
    return this->C2;
}
Vector2D Triangle2D :: getC3() const
{
    return this->C3;
}

double Triangle2D :: getLength(Vector2D V1, Vector2D V2) const
{
    return sqrt((V1.getX()-V2.getX())*(V1.getX()-V2.getX())+(V1.getY()-V2.getY())*(V1.getY()-V2.getY()));
}
double Triangle2D :: getArea() const
{
    double a=this->getLength(this->C1, this->C2);
    double b=this->getLength(this->C2, this->C3);
    double c=this->getLength(this->C1, this->C3);
    double p=0.5*(a+b+c);
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

    //получение цветов
double Triangle2D :: getRed() const
{
    return this->red_color;
}
double Triangle2D :: getBlue() const
{
    return this->blue_color;
}
double Triangle2D :: getGreen() const
{
    return this->green_color;
}

    //установление координат вершин
void Triangle2D :: setC1(Vector2D C1)
{
    this->C1=C1;
}
void Triangle2D :: setC2(Vector2D C2)
{
    this->C2=C2;
}
void Triangle2D :: setC3(Vector2D C3)
{
    this->C3=C3;
}

    //установление цвета
void Triangle2D :: setColor(double red_color, double green_color, double blue_color)
{
    this->red_color=red_color;
    this->green_color=green_color;
    this->blue_color=blue_color;
}

    //движение
    //сдвиг на значение A
void Triangle2D :: positionLeft(double A)
{
    this->C1.setX(this->C1.getX()-A);
    this->C2.setX(this->C2.getX()-A);
    this->C3.setX(this->C3.getX()-A);
}
void Triangle2D :: positionRight(double A)
{
    this->C1.setX(this->C1.getX()+A);
    this->C2.setX(this->C2.getX()+A);
    this->C3.setX(this->C3.getX()+A);
}
void Triangle2D :: positionUp(double A)
{
    this->C1.setY(this->C1.getY()+A);
    this->C2.setY(this->C2.getY()+A);
    this->C3.setY(this->C3.getY()+A);
}
void Triangle2D :: positionDown(double A)
{
    this->C1.setY(this->C1.getY()-A);
    this->C2.setY(this->C2.getY()-A);
    this->C3.setY(this->C3.getY()-A);
}
    //сдвиг на величину х,у
void Triangle2D :: position(double x, double y)
{
    this->C1.setX(this->C1.getX()+x);
    this->C2.setX(this->C2.getX()+x);
    this->C3.setX(this->C3.getX()+x);
    this->C1.setY(this->C1.getY()+y);
    this->C2.setY(this->C2.getY()+y);
    this->C3.setY(this->C3.getY()+y);
}


    //рисование
void Triangle2D :: drawBorder(float width) //рисование границы указанной ширины
{
    glLineWidth(width);
    glBegin(GL_LINES);

    glColor3d(red_color, green_color, blue_color);
    glVertex2d(C1.getX(), C1.getY());
    glVertex2d(C2.getX(), C2.getY());

    glVertex2d(C2.getX(), C2.getY());
    glVertex2d(C3.getX(), C3.getY());

    glVertex2d(C3.getX(), C3.getY());
    glVertex2d(C1.getX(), C1.getY());

    glEnd();

}
void Triangle2D :: drawTriangle()
{
    glColor3d(red_color, green_color, blue_color);

    glBegin(GL_TRIANGLES);

    glVertex2d(this->C1.getX(), this->C1.getY());
    glVertex2d(this->C2.getX(), this->C2.getY());
    glVertex2d(this->C3.getX(), this->C3.getY());

    glEnd();
}
