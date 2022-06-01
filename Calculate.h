#include <iostream>
#include <string>
using namespace std;

class partTimeEmployee{
	public:

		partTimeEmployee(){
			payRate = 0;
			hoursWorked = 0;
		}
		void print(){
			cout<<"Hi " << first_name<<" " <<last_name<<"! Your wage is: $"<<calculatePay();
			

		}

		int calculatePay(){
			
		
			
			return payRate * hoursWorked;


		}
		void setName(string first, string last){
			first_name = first;
			last_name = last;


		}
		void setRate(int ammount){

			payRate = ammount;

		}
		void setHours(int ammount){

			hoursWorked = ammount;

		}
	private:

		string first_name, last_name;
		int  payRate,hoursWorked;



};
 