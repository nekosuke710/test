#include<iostream>
#include<cmath>
bool is_prime(int x)
{
	int i;
	double m = std::sqrt(x);
	if(x==1) return false;
	if(x==2) return true;
	for(i = 2; i <= m; i++){
		if(x%i==0) return false;
		//std::cout<<"x="<<x<<" "<< "i="<<i<<" "<<"n="<<i<<" ";
	}
	return true;
}
int main()
{
	int a,b;
	std::cin>>a>>b;
	int i=a;
	while(i<=b){
		if(is_prime(i)) std::cout<<i<<"\n";
		i++;
	}
}
