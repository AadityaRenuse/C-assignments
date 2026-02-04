#include<iostream>
using namespace std;
class area
{
    public:
void triangle()
{
    float b,h;
    cout<<"Enter base and height of triangle:";
    cin>>b>>h;
    cout<<"area of triangle ="<<0.5*b*h<<endl;
    
}
void circle()
{
    
    float r;
    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"area of circle="<<3.14*r*r<<endl;


}
};
int main()
{
area A;
A.triangle();
A.circle();
}