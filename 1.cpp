#include<iostream>
using namespace std;
class cylinder{
	private:
		double r;
		double h;
	public:
		cylinder(double rid,double hei)
		{
		  r=rid;
		  h=hei; 
		}
	void vol()
		{
			double vol;
		  vol=3.14*r*r*h;
		  cout<<"Ìå»ýÎª£º"<<vol;
		} 
		
}; 
int main()
{
cylinder ob1(1,2);
ob1.vol();
return 0;
}
