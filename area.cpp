#include<iostream>
using namespace std;
void rec(int,int);
void sq(int);
void cir(int);
void tri(int,int);
int main()
{
    int opt,l,b;
    cout<<" Press 1 for area of the Rectangle "<<endl;
    cout<<" Press 2 for area of the Square "<<endl;
    cout<<" Press 3 for area of the Circle "<<endl;
    cout<<" Press 4 for area of the triangle"<<endl;
    cout<<" Choose any one: ";
    cin>>opt;
    switch (opt)
    {
    case 1: cout<<"Enter the length of the rectangle: "<<endl;
            cin>>l;
            cout<<"Enter the breadth of thr reactangle: "<<endl;
            cin>>b;
            rec(l,b);
        break;
    case 2: cout<<"Enter side of the square: "<<endl;
            cin>>l;
            sq(l);
        break;    
    case 3: cout<<"Enter the radius of the circle: "<<endl;
            cin>>l;
            cir(l);
        break;
    case 4: cout<<"Enter the bass of the triangle: "<<endl;
            cin>>l;
            cout<<"Enter the height of the triangle: "<<endl;
            cin>>b;
            tri(l,b); 
        break;       
    default: cout<<"Invalid!!!";
        break;
    }
}
void rec( int num1 ,int num2)
{
    int area = num1 * num2;
    cout<<"Area of rectangle is: "<<area;
}
void sq(int num1)
{
    int area = num1*num1;
    cout<<"Area of Square is: "<<area;
}
void cir(int num1)
{
    float area = 3.141*(num1*num1);
    cout<<"Area of circle is: "<<area;
}
void tri(int num1,int num2)
{
    float area = 0.5*(num1*num2);
    cout<<"Area of the triangle is: "<<area;
}