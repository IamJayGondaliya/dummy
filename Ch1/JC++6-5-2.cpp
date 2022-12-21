#include<iostream>
using namespace std;

ostream &t(ostream &output) {
	return output << "\t";
}

class Stud{
	private:
		int roll;					
		string name;				
		double per;	
		double fee;				
		static string school;		
		static double totalFees;		
	public:
		void setData(int i,int n) {
			system("cls");
			cout << "Student no: " << i << "/" << n << endl;			
			cout << "Enter roll no. : " ;
			cin  >> roll;
			cout << "Enter name: ";
			cin  >> name;
			cout << "Enter per: ";
			cin  >> per;
			cout << "Enter fees amount: ";
			cin  >> fee;
			totalFees += fee;
		}
		
		void getData() {
			cout << "Roll: " << roll << endl
				 << "Name: " << name << endl
				 << "Per : " << per << endl;
		}
		
		static void header() {
			cout << "Roll\tName\tPer\tFees\tSchool\n======= ======= ======= ======= =======\n";
		}
		
		static void myStatics() {
			cout << school << t << totalFees;
		}
		
		static void getTotalFees() {
			cout << "========================================" << endl
				 << "Total fees: " << totalFees << endl;
		}
		
		void getDataInTable() {
			cout << roll << t << name << t << per << t << fee << t << school << endl;
		}
};

//Static data member
string Stud::school = "GSEB";
double Stud::totalFees = 0;
//Scope resolution operator => Membership label Operator	::

int main() {
	
	int n,i;
	
	cout << "Enter the number of students: ";
	cin  >> n;
	
	Stud s[n];
	
	for(i=0; i<n; i++) {
		s[i].setData(i+1,n);
	}
	
	system("cls");
	
	Stud::header();
	
	for(i=0; i<n; i++) s[i].getDataInTable();
	
	Stud::getTotalFees();
	
	Stud::myStatics();
	
	
}










