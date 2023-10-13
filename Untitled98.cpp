#include<iostream>
#include<string>

using namespace std;


//function to view available doctors

void doctorData()
 {

	int id, pNum, pAge;
	string docName, pfName, plName, pName;

	
	cout << "\t\t\t __AVAILABLE DOCTORS__ \n\n\n";

        cout<<"<==========================================================>"<<endl;
        cout<<"                     Dr. Waqar                              "<<endl;
        cout<<"           -----------Timing-----------                     "<<endl;
        cout<<"           Monday To Friday        9AM - 5PM                "<<endl;
        cout<<"           Saturday                10AM - 1PM               "<<endl;
        cout<<"           Sunday                  OFF                      "<<endl;
        cout<<"<==========================================================>"<<endl;

        cout<<"<==========================================================>"<<endl;
        cout<<"                     Dr. Benden                             "<<endl;
        cout<<"           -----------Timing-----------                     "<<endl;
        cout<<"           Monday To Friday        1PM - 9PM                "<<endl;
        cout<<"           Saturday                1PM - 5PM                "<<endl;
        cout<<"           Sunday                  OFF                      "<<endl;
        cout<<"<==========================================================>"<<endl;

        cout<<"<==========================================================>"<<endl;
        cout<<"                     Dr. Krimson                            "<<endl;
        cout<<"           -----------Timing-----------                     "<<endl;
        cout<<"           Monday To Friday        8AM - 6PM                "<<endl;
        cout<<"           Saturday                10AM - 1PM               "<<endl;
        cout<<"           Sunday                  3PM - 5PM                "<<endl;
        cout<<"<==========================================================>"<<endl;

        cout<<"<==========================================================>"<<endl;
        cout<<"                     Dr. Romon                              "<<endl;
        cout<<"           -----------Timing-----------                     "<<endl;
        cout<<"           Monday To Friday        9AM - 5PM                "<<endl;
        cout<<"           Saturday                10AM - 1PM               "<<endl;
        cout<<"           Sunday                  7PM - 9PM                "<<endl;
        cout<<"<==========================================================>"<<endl;
        
        cout<<"<==========================================================>"<<endl;
        cout<<"                     Dr. Francis                            "<<endl;
        cout<<"           -----------Timing-----------                     "<<endl;
        cout<<"           Monday To Friday        9AM - 5PM                "<<endl;
        cout<<"           Saturday                10AM - 1PM               "<<endl;
        cout<<"           Sunday                  7PM - 9PM                "<<endl;
        cout<<"<==========================================================>"<<endl;
				   

//function to shedule an appointment
	cout << "\t Please provide the information below to schedule an appointment.\n\n";

	cout << "\t First Name : ";
	cin >> pfName;
	cout << "\t Last  Name : ";
	cin >> plName;
	cout << "\t Age        : ";
	cin >> pAge;
	cout << "\t Contact no : ";
	cin >> pNum;
	cout << "\t Doctor ID  : ";
	cin >> id;

	cout << endl << endl << endl;

	pName = pfName + " " + plName;

	if (id == 1) {
		cout << "\t APPOINTMENT SHEET\n";
		cout << "\t------------------------------\n";
		cout << "\t Dr.waqar appointed \n\n \t Date:- 08.01.2023\n\n\t Time:- 9.00 a.m\n\n\t Patient no:- 21\n\n\t";
		cout << " Patient Name: " << pName << endl;
		cout << "\t------------------------------\n\n\n";
		cout<<endl<<endl<<endl<<endl<<endl<<endl;

	}
	else if (id == 2) {
		cout << "\t APPOINTMENT SHEET\n";
		cout << "\t--------------------------------\n";
		cout << "\t Dr. Benden Appointed\n\n \t Date:- 02.01.2023\n\n\t Time:- 4.45 p.m\n\n\t Patient no:- 09\n\n\t";
		cout << " Patient Name: " << pName << endl;
		cout << "\t--------------------------------\n\n\n";
		cout<<endl<<endl<<endl<<endl;
		

	}
	else if (id == 3) {
		cout << "\t APPOINTMENT SHEET\n";
		cout << "\t--------------------------------\n";
		cout << "\t Dr. Krimson Appointed \n\n \t Date:- 09.01.2023\n\n\t Time:- 4.15 p.m\n\n\t Patient no:- 19\n\n\t ";
		cout << " Patient Name: " << pName << endl;
		cout << "\t--------------------------------\n\n\n";
		cout<<endl<<endl<<endl<<endl;	}
		

	else if (id == 4) {
		cout << "\t APPOINTMENT SHEET\n";
		cout << "\t---------------------------------\n";
		cout << "\t Dr. Romon  Appointed\n\n \t  Date:- 11.01.2023\n\n\t Time:- 10.00 p.m\n\n\t Patient no:- 03\n\n\t";
		cout << " Patient Name: " << pName << endl;
		cout << "\t---------------------------------\n\n\n";
		cout<<endl<<endl<<endl<<endl;
	}

	else if (id == 5) {
		cout << "\t APPOINTMENT SHEET\n";
		cout << "\t---------------------------------\n";
		cout << "\t Dr. Francis appointed\n\n \t  Date:- 07.03.2023\n\n\t Time:-10.00 a.m\n\n\t Patient no:- 06\n\n\t";
		cout << " Patient Name: " << pName << endl;
		cout << "\t---------------------------------\n\n\n";
		cout<<endl<<endl<<endl<<endl;
	}
	else {
		cout << "\t !!!! WRONG INPUT PLEASE TRY AGAIN !!!!\n\n\n";
		cout<<endl<<endl<<endl<<endl;
	}
}


//function to delete appointment
void deleteappointment()
{
int id;

	cout << "\t Delete Doctor Appointments" << endl << endl;
	cout << "\t Input Id for Delete Doctor: ";
	cin >> id;
	cout << endl;

	if (id == 1) {


		cout << "\t Dr.Waqar Appointment canceled \n\n\n";

	}
	else if (id == 2) {


		cout << "\t Dr.Benden Appointment canceled\n\n\n";

	}
	else if (id == 3) {

		cout << "\t Dr.Krimson appointment canceled\n\n\n";

	}
	else if (id == 4) {

		cout << "\t Dr.Romon  appointment canceled\n\n\n";
	}
	else if (id == 5) {

		cout << "\t Dr.Francis  appointment canceled\n\n\n";
	}
	else {
		cout << "\t  WRONG INPUT \n\n\n";
	}	
}



//function to view hospital details

void companyData()
{
	cout << " ---------------------------------------- " << endl;
	cout << " ---------------------------------------- " << endl;
	cout << "   Address : 47, Alexander Road, London   " << endl;
	cout << "   Hotline :    +442045772724             " << endl;
	cout << "   E mail  :    sparecareHospital@gmail.com          " << endl;
	cout << "   Web     :    WWW.SparecareHospital.com            " << endl;
	cout << " ---------------------------------------- " << endl;
	cout << " ---------------------------------------- " << endl << endl;
	cout<<endl<<endl<<endl<<endl;
}


int main()
{

	string userN, passW;
	int select;

cout<<"\t\t\t=============================================================================="<<endl;
    cout<<"\t\t\t                          Spire Health Care                               "<<endl;
    cout<<"\t\t\t=============================================================================="<<endl;


	cout << "\n\n\n\n !!!To shedule a doctor's appointment, please log in below!!!" << endl << endl;


	cout << "  Username: ";
	cin >> userN;
	cout << "  password: ";
	cin >> passW;
	

	if (userN == "admin" && passW == "password") {

		cout << "\t\t\t\t login successful \n\n\n\n";
		cout << "\t\t Thank you for logging in Spire Health Care Hospital.\n\n\n\n";

		while ("true") {
			
			cout << "   1. Available Doctor details\n" << endl;
			cout << "   2. Delete Doctor appointment\n" << endl;
			cout << "   3. Hospital Details\n" <<endl;
			cout << "   4. Exit\n" << endl;
			cout << "   5. Logout\n" << endl<<endl;;
			
			cout << "   Select Option: ";
			cin >> select;
						
			cout << endl << endl;

			switch (select) {

			case 1:
				doctorData();
				break;
			case 2:
				deleteappointment();
				break;
			case 3:
				companyData();
				break;
				//function to exit
			case 4:
				cout << "\t---Have a Good Day---" << endl << endl;
				break;
				//function to logout
			case 5:
				cout << "---logged out---" << endl << endl;
				break;
			default:
				cout << "!!!! WRONG INPUT PLEASE TRY AGAIN !!!!" << endl << endl << endl;
				break;

			}
		}
	}

	else {

		cout << "incorrect username and password please try again!!!!" << endl << endl << endl;
	}	cout<<endl<<endl<<endl;

	return 0;
}
