#include<iostream>
using namespace std;

/*
	5.4
		- What is Constructor?
			- Constructor is a block of code which is automatically invoked(run/execute) when class is instantiated.
			- instance	== object					NOUN
			- instantiate == to create object		VERB		
		- Rules to create constructor :
			- it's name must be same as class's name
			- it must not have any return data type => (void, int, char, ....)
			- it must not return any value
			
		- Types of constructors
			- Default
			- Parameterized
			- Copy	
				- implicit	(directly)
					- getter
				- explicit	(forcefully)
				
		- What is Destructor?
			- a block of code which is automatically invoked when object is destroyed or deleted.
					
		- Rules to create constructor :
			- it's name must be same as class's name starts with tild(~) operator
			- it must not have any return data type => (void, int, char, ....)
			- it must not return any value
			- Destructor can't have any parameters
		
*/
class Hotel{
	private:
		int id;
		string name;
		static int count;
	public:
		//Constructor
		Hotel() {
			id = count;			
			cout << "Id: " << id << endl;			
			count++;
		}		
		//Destructor
		~Hotel() {
			cout << "Id " << id << " is deleted..." << endl;
		}
};

int Hotel::count = 1;

int main() {
	Hotel h[5];
}








