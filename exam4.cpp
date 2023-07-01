#include<iostream>
using namespace std;

class A
{
	public:
		int x=10;int y=5;
		int r;
		float area;
		int l,b;
		int L,B,H;
		float volume;
		
		public:
		void set()
		{
			cout<<"X="<<x<<endl;
			cout<<"Y="<<y;
		}
		int get()
		{
			return x+y;
		}
};
class B:public A
{
		public:
		void set(int n)
		{
			area=3.14*r*r;
			cout<<area;
		}
		int get()
		{
			return area;
		}
};
class C:public B
{
	public:
	void set(int m,int n)
	{
		area=l*b;
		cout<<area;
	}
	int get()
	{
		return area;
	}
};
class D:public C
{
	public:	
	void set(int m,int n,int o)
	{
		volume=L*B*H;
		cout<<volume;
	}
	int get()
	{
		return volume;
	}
};
		
int main()
{ 
    D o1;
    cout<<"Sum is:";
    o1.get();
    
    cout<<"Area of circle is:";
    o1.set(3);
    o1.get();
    
      
    cout<<"Area of Rectangle is:";
    o1.set(3,4);
    o1.get();
    
      
    cout<<"volumeis:";
    o1.set(3,4,5);
    o1.get();
    
	return 0;
	
}
