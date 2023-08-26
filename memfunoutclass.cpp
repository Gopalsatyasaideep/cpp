#include<iostream>
using namespace std;
class Employee{
	public:
		static string company; //static variable
		string name;
		int id;
		double percent;
		Employee(string n,int i,double per); // constructor signature
		void display(); //fun signature
		static void di() //static function
		{
			cout<<"CEO"<<endl;
		}
};
string Employee::company="Microsoft";
void Employee::display() //member fun outside the class
{
	cout<<name<<" "<<id<<" "<<percent<<endl; 
	cout<<company<<endl;
}
Employee::Employee(string n, int i, double per) //declaring constructor outside the class
{
	name=n;
	id=i;
	this->percent=per;
}

int main(){
	Employee e1("sarat",342,45.5); //parameterised object
	Employee e2("srinu",345,87.4);
	e1.display();
	e2.display();
	e1.di();
	return 0;
}
