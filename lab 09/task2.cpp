#include<iostream>
#include<cmath>
using namespace std;
double pi = 3.142;

class Shape{
public:
virtual double area()const{
    return 0;
}
virtual double perimeter()const{
    return 0;
}
virtual void display_properties()const{
}
};
class Circle: public Shape{
double radius;
public:
Circle(){
    cout<<"Enter Radius Of Circle: ";
    cin>>this->radius;
}
 double area()const{
    return pi*(radius)*(radius);
   
}
 double perimeter()const{
    return 2*pi*radius;
}
 void display_properties()const{
    cout<<"Area: "<<area()<<endl
    <<"Perimeter: "<<perimeter()<<endl
    <<"Diameter: "<<radius*2<<endl;
}
};
class Rectangle: public Shape{
double length,width;
public:
Rectangle(){
    cout<<"Enter length Of Rectangle: ";
    cin>>this->length;
    cout<<"Enter Width Of Rectangle: ";
    cin>>this->width;
}
 double area()const{
    return length*width;
   
}
 double perimeter()const{
    return 2*(length+width);
}
 void display_properties()const{
    cout<<"Area: "<<area()<<endl
    <<"Perimeter: "<<perimeter()<<endl
    <<"Diagonal: "<<sqrt((length*length)+(width*width))<<endl;
}  
};
class Square: public Shape{
double length;
public:
Square(){
    cout<<"Enter length Of Square: ";
    cin>>this->length;

}
 double area()const{
    return length*length;
   
}
 double perimeter()const{
    return 4*length;
}
 void display_properties()const{
    cout<<"Area: "<<area()<<endl
    <<"Perimeter: "<<perimeter()<<endl
    <<"Diagonal: "<<sqrt(2)*length<<endl;
}
};
class Triangle: public Shape{
protected:
double a,b,c;
public:
Triangle(){
    cout<<"Enter length Of Side 1: ";
    cin>>this->a;
    cout<<"Enter Width Of Side 2: ";
    cin>>this->b;
    cout<<"Enter Width Of Side 3: ";
    cin>>this->c;
}
double perimeter()const{
    return a+b+c;
}
 double area()const{
    double s = Triangle :: perimeter();
    return sqrt( s*(s-a)*(s-b)*(s-c));
   
}
 
 void display_properties()const{
    cout<<"Area: "<<area()<<endl
        <<"Perimeter: "<<perimeter()<<endl;
 }   
};
class Equlateral_triangle: public Triangle{
public:
Equlateral_triangle(){
    cout<<"Enter length Of Side: ";
    cin>>a;
    b= a;
    c=a;
    
}
double perimeter()const{
    return a+b+c;
}
 double area()const{
    double s = Triangle :: perimeter();
    return sqrt( s*(s-a)*(s-b)*(s-c));
   
}
 
 void display_properties()const{
    cout<<"Perimeter: "<<perimeter()<<endl<<"Area: "<<area()<<endl;
 }
};
int main(){
cout<<"Werlcome to the Geometry CaLculator: "<<endl;
string choise;
int n;
Shape *sptr;

do{
cout<<"Baray Mehrabani Shape Muntakhib karein: "<<endl
<<"1. Circle:"<<endl<<"2. Rectangle:"<<endl<<
"3. Triangle"<<endl<<"4. Equilateral Triangle"<<endl
<<"5. Square"<<endl<<"CHOOSE: ";
cin>>n;
switch (n)
{
case 1:{
    Circle cir;
    sptr = &cir;
    sptr->display_properties();
    break;
}

case 2:{
    Rectangle rect;
    sptr = &rect;
    sptr->display_properties();
    break;
}

case 3:{
    Triangle tri;
    sptr = &tri;
    sptr->display_properties();
    break;
}

case 4:{
    Equlateral_triangle eqt_tri;
    sptr = &eqt_tri;
    sptr->display_properties();
    break;
}
   
case 5:{
    Square sqr;
    sptr = &sqr;
    sptr->display_properties();
    break; 
}
        
default:
    break;
}
cout<<"kiya ap dobara Shape Muntakhib karna chahty hain? (yes/no):";
cin>>choise;
}while(choise == "Yes");
    return 0;
}
