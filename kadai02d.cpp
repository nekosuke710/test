#include<iostream>
#include<cmath>
#define f(x,a) ((x*x) - (a))
#define f1(x) ((2*x))
int main()
{
    double a,x0,d,xa,xb,flag = 0;
    std::cin>>a>>x0>>d;
    xa = x0;
    xb = xa - (f(xa,a)/f1(xa));
    while(std::fabs(xb - xa) >= d){
        if(flag != 0) {std::cout<<xb<<"\n";}
        else {std::cout<<xa<<"\n"<<xb<<"\n";}
        xa = xb;
        xb = xa - (f(xa,a)/f1(xa));
        flag = 1;
    }
    std::cout<<xb<<"\n";
}