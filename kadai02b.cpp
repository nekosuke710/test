#include<iostream>
#include<cmath>
bool is_prime(int x)
{
	int i,flag=1;//素数
	double m = std::sqrt(x);
	for(i = 2; i < m; i++)
	{
		if(x%i==0) {flag=0; break;}
	}
	if(flag==0){return false;} else {return true;}
}
int main()
{
	int a,b;
	std::cin>>a>>b;
	int i=a;
	while(i<=b){
		if(is_prime(i)) std::cout<<i;
		i++;
	}
}
