#include<iostream>
using namespace std;

class Distance{
	public:
	int feet,inch;
	int sum;
};

int main()
{
	Distance d1,d2,sum;
	cout<<"enter first distance :"<<endl;
	cout<<"enter distance in feet :"<<endl;
	cin>>d1.feet;
	cout<<"enter distance in inch :"<<endl;
	cin>>d2.inch;
	
	cout<<"second distance :"<<endl;
	cout<<"enter distance in feet :"<<endl;
	cin>>d2.feet;
	cout<<"enter distance in inch :"<<endl;
	cin>>d2.inch;
	
	
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	if(sum.inch>=12)
	{
		sum.inch=sum.inch-12;
		
	}
	sum.feet++;
	cout<<"sum="<<sum.feet <<"feet" <<" "<<sum.inch<<"inch"<<endl;
	return 0;
}
