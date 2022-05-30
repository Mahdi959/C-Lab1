// Mahdi Ashrfee
// CS132-02
// Lab 1
// May 30

#include <iostream>
#include <string>

using namespace std; 

//create the class definition here
class partTimeEmployee(){
	public:

		partTimeEmployee(){
			payRate = 0;
			hoursWorked = 0;
		}
		void print(){
			
			

		}

		int calculatePay(int ammount){
			


		}
		void setName(string first, string last){



		}
		int setRate(int ammount){



		}
	private:

		string first name, last name;
		int  payRate,hoursWorked;



};
 
   
int main()
{
	string fName, lName;
	double pay, hours;
	partTimeEmployee newEmp;

	//values before setting
	newEmp.print();

	// Now to get and set the values
	cout << "\nEnter the employees first name and last name: ";
	cin >> fName >> lName;
	cout << "Enter the employees pay rate: ";
	cin >> pay;
	cout << "Enter the employees number of hours: ";
	cin >> hours;
	
	newEmp.setName(fName, lName);
	newEmp.setRate(pay);
	newEmp.setHours(hours);
    

	// printing the values for that employee
    newEmp.print();

    return 0;
}

//the class member function definitions go down here