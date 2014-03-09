// KOLO.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<stdio.h>
#include<cmath>
#include<iostream>
#define M_PI 3.14159265358979323846
struct location
{
float x,y;
};
class Circle
{
    location location;
    float radius;
public:
void set_location(float x,float y)
{
location.x=x;
location.y=y;
}
float get_locationx(char znak)
{
	if(znak=='x')
return location.x;
	if(znak=='y')
return location.y;
}
void set_radius(float radiuss)
{
radius=radiuss;
}
float get_radius()
{
return radius;
}
float circumference()
{
    return 2 * M_PI * radius;
}
float area()
{
    return M_PI * pow(radius,2);
}
};
int main()
{
   Circle circle;
   circle.set_location( 4., 2. );
circle.set_radius(15);
printf("Circle location is %.1fx%.1f.\n",
   circle.get_locationx('x'), circle.get_locationx('y'));
printf("Circle radius is %.1f.\n",
    circle.get_radius());
printf("Circle circumference is %.2f.\n",
    circle.circumference());
printf("Circle area is %.2f.\n",
    circle.area());
system("pause");
return 0;
/*location location; //
   location.x=5; jest to mozliwe z funkcja main();
   printf("%f",location.x); wyœwietli sie liczba 5;
   circle.radius=10;*/  // member "Circle::radius"is inaccessible ta opcja jest niedostepna. zmienna radius jest niedostêpna(prywatna) z funkcji main() */
/*Dlaczego pobieramy i ustawiamy dane w klasie przy u¿yciu specjalnych publicznych metod, a nie odnosz¹c siê do nich bezpoœrednio?
odp. Poniewa¿ dane s¹ niewidoczne(prywatne-wynika to z hermetyzacji) z poziomu funkcji main(), aby siê do nich dostaæ korzystamy
z publicznych metod.*/
}

