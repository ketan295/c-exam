#include<iostream>
#include<string.h>
using namespace std;

class A{
	public:
	int id;
	char name[100];
	char role[100];
	int salary;
	int expirience;
	char comp_name[100];
	char address[100];
	char email[100];
	int contact;
	
	public:
		
	void Set()
	{
		cout<<"Enter id :";
		cin>>id;
		cout<<"Enter name :";
		cin>>name;
		cout<<"Enter role :";
		cin>>role;
		
	}
};
class B :public A
{
	public:
		
	void Setdata()
	{
		cout<<"Enter salary :";
		cin>>salary;
		cout<<"Enter experiecnce :";
		cin>>expirience;
		
	
		
	}
};
class C :public B
{
	public:
		
	void Setter()
	{
		cout<<"Enter company name:";
		cin>>comp_name;
		cout<<"Enter address:";
		cin>>address;	
	}
	void get()
	{
		cout<<"Name :"<<name<<endl;
		cout<<"Role :"<<role<<endl;
		cout<<"Salary:"<<salary<<endl;
		
	}
};
class D :public C
{
	public:
		
	void setter()
	{
		cout<<"Enter Email:";
		cin>>email;
		cout<<"Enter Contact:";
		cin>>contact;	
	}
	void Get()
	{
		cout<<"Id :"<<id<<endl;
		cout<<"Name :"<<name<<endl;
		cout<<"Role:"<<role<<endl;
		cout<<"Expirience:"<<expirience<<endl;
		cout<<"Company Name:"<<comp_name<<endl;
		cout<<"Adress:"<<address<<endl;
		cout<<"Email:"<<email<<endl;
		cout<<"Contact:"<<contact<<endl;		
	}
};
int main()
{
	D obj;
	obj.Set();
	obj.Setdata();
	obj.Setter();
	obj.setter();
	
	cout <<"Employee information is :";
	
	obj.Get();
	obj.get();
	
	return 0;
	
}
