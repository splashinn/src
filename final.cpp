#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//
//CLASS DECLARATION SECTION
//
class EmployeeClass {
public:
	void ImplementCalculations(string EmployeeName, int hours, double wage);
	void DisplayEmployInformation(void);
	void Addsomethingup (EmployeeClass, EmployeeClass, EmployeeClass);
	string EmployeeName ;
	int hours ;
	float wage ;
	float basepay ;
   	int overtime_hours ;
	float overtime_pay ;
	float overtime_extra ;
	float iTotal_salaries ;
	float iIndividualSalary ;
	int iTotal_hours ;
	int iTotal_OvertimeHours ;
};

int main()
{	system("cls"); 

	cout << "\nWelcome to the Employee Pay Center\n\n" ;

/*
Use this section to define your objects.  You will have one object per employee.  You have only three employees.
The format is your class name and your object name.
*/
EmployeeClass Emp1;
EmployeeClass Emp2;
EmployeeClass Emp3;
/*
Here you will prompt for the first employee's information.
Prompt the employee name, hours worked, and the hourly wage.  For each piece of information, you will update the appropriate class member defined above.
Example of Prompts
Enter the employee name      = 
Enter the hours worked       = 
Enter his or her hourly wage = 
*/
	cout << "Enter the first employee's name      = ";
	cin >> Emp1.EmployeeName;
	system("cls");
	cout << "\nEnter the hours worked               = ";
	cin >> Emp1.hours;
	system("cls");
	cout << "\nEnter his or her hourly wage         = ";
	cin >> Emp1.wage;
	system("cls");
/*
Here you will prompt for the second employee's information.
Prompt the employee name, hours worked, and the hourly wage.  For each piece of information, you will update the appropriate class member defined above.
Enter the employee name      = 
Enter the hours worked       = 
Enter his or her hourly wage = 

*/
	cout << "Enter the first employee's name      = ";
	cin >> Emp2.EmployeeName;
	system("cls");
	cout << "\nEnter the hours worked               = ";
	cin >> Emp2.hours;
	system("cls");
	cout << "\nEnter his or her hourly wage         = ";
	cin >> Emp2.wage;
	system("cls");
/*
Here you will prompt for the third employee's information.
Prompt the employee name, hours worked, and the hourly wage.  For each piece of information, you will update the appropriate class member defined above.
Enter the employee name      = 
Enter the hours worked       = 
Enter his or her hourly wage = 

*/
	cout << "Enter the first employee's name      = ";
	cin >> Emp3.EmployeeName;
	system("cls");
	cout << "\nEnter the hours worked               = ";
	cin >> Emp3.hours;
	system("cls");
	cout << "\nEnter his or her hourly wage         = ";
	cin >> Emp3.wage;
	system("cls");
/*
Here you will implement a function call to implement the employ calcuations for each object defined above.  You will do this for each of the three employees or objects.
The format for this step is the following:
 [(object name.function name(objectname.name, objectname.hours, objectname.wage)] ;
*/
	cout << endl;
	Emp1.ImplementCalculations(Emp1.EmployeeName, Emp1.hours, Emp1.wage);
	Emp2.ImplementCalculations(Emp2.EmployeeName, Emp2.hours, Emp2.wage);
	Emp3.ImplementCalculations(Emp3.EmployeeName, Emp3.hours, Emp3.wage);
/*
This section you will send all three objects to a function that will add up the the following information:
- Total Employee Salaries 
- Total Employee Hours
- Total Overtime Hours

The format for this function is the following:
-	Define a new object.
-	Implement function call [objectname.functionname(object name 1, object name 2, object name 3)]
*/



} //End of Main Function


void EmployeeClass::ImplementCalculations (string EmployeeName, int hours, double wage){
//Initialize overtime variables
overtime_hours=0;
overtime_pay=0;
overtime_extra=0;

	if (hours > 40) 
	{		

/* 
This section is for the basic calculations for calculating overtime pay.
-	base pay = 40 hours times the hourly wage
-	overtime hours = hours worked - 40
-	overtime pay = hourly wage * 1.5
-	overtime extra pay over 40 = overtime hours * overtime pay
-	salary = overtime money over 40 hours + your base pay
*/
	basepay = 40 * wage;
	overtime_hours = hours - 40;
	overtime_pay = wage * 1.5;
	overtime_extra = overtime_hours * overtime_pay;
	iIndividualSalary = overtime_extra + basepay;

/*
Implement function call to output the employee information.  Function is defined below.
*/
DisplayEmployInformation();

	}	// if (hours > 40)
	else
	{	

	

/* Here you are going to calculate the hours less than 40 hours.
-	Your base pay is = your hours worked times your wage
-	Salary = your base pay
*/

/*
Implement function call to output the employee information.  Function is defined below.
*/

	} // End of the else
	
	DisplayEmployInformation();

	
} //End of Primary Function

void EmployeeClass::DisplayEmployInformation () {
// This function displays all the employee output information.

/* 
This is your cout statements to display the employee information:
Employee Name ............. = 
Base Pay .................. = 
Hours in Overtime ......... = 
Overtime Pay Amount........ = 
Total Pay ................. = 
*/

	cout << "Employee Name ......................... " << setw(15) << EmployeeName <<endl;
	cout << "Base Pay .............................. " << setw(15) << basepay << endl;
	cout << "Hours in Overtime ..................... " << setw(15) << overtime_hours << endl;
	cout << "Overtime Pay Amount ................... " << setw(15) << overtime_extra << endl;
	cout << "Total Pay ............................. " << setw(15) << iIndividualSalary << endl << endl;
} // END OF Display Employee Information

void EmployeeClass::Addsomethingup (EmployeeClass Emp1, EmployeeClass  Emp2, EmployeeClass Emp3){
	// Adds two objects of class Employee passed as 
	// function arguments and saves them as the calling object's data member values. 

/* 
Add the total hours for objects 1, 2, and 3.
Add the salaries for each object.
Add the total overtime hours.
*/
	iTotal_hours = Emp1.hours + Emp2.hours + Emp3.hours;
	iTotal_salaries = Emp1.iIndividualSalary + Emp2.iIndividualSalary + Emp3.iIndividualSalary;
	iTotal_OvertimeHours = Emp1.overtime_hours + Emp2.overtime_hours + Emp3.overtime_hours;
/*
Then display the information below.  
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%% EMPLOYEE SUMMARY DATA%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%% Total Employee Salaries ..... = 576.43
%%%% Total Employee Hours ........ = 108
%%%% Total Overtime Hours......... = 5
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*/

	for(int i=0; i<55; i++)
		cout << "%";
	cout << endl;
	cout << "%%%%%%%%%%%%%%%% EMPLOYEE SUMMARY DATA %%%%%%%%%%%%%%%%" << endl;
	for(int i=0; i<55; i++)
		cout << "%";
	cout << endl;
	cout << "%%%% Total Employee Salaries ........ = " << setw(15) << iTotal_salaries << endl;
	cout << "%%%% Total Employee Hours ........... = " << setw(15) <<iTotal_hours << endl;
	cout << "%%%% Total Overtime Hours ........... = " << setw(15) <<iTotal_OvertimeHours << endl;
	for(int i=0; i<55; i++)
		cout << "%";
	cout << endl;
	for(int i=0; i<55; i++)
		cout << "%";
	cout << endl;
	} // End of function
