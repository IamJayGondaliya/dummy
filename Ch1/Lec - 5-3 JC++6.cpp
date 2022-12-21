#include<iostream>
using namespace std;

/*
		Friend function :
			- It is mainly used to access private atributes of class.
			- We have to declare friend function in class's body.
			- It must be defined (create body) in global area.
			
			class fooClass{
				public:
					.
					.
					//Only declaration in class
					friend void foo();
			};
			
			//Defination in global area
			void foo() {
				//body
			}
			
			Types of friend function :
				- default
				- parameterized
*/


//Optional use as a getter of friend function
class Demo{
	private:
	public:
		int d;
		//setter
		void setData() {
			cout << "Enter value of D: ";
			cin  >> d;
		}
		
		friend void fd(Demo&);
};

/*
		::                
		Call by value		=> changes limited to function
		Call by reference	=> pointer/reference => makes changes in original value.
*/

//getter friend
void fd(Demo &d1) {
	d1.d = 0;
	cout << "d: " << d1.d << endl;
}

int main() {
	Demo d1;
	
	d1.setData();
	
	fd(d1);
	
	cout << "Outer d: " << d1.d;
}




















