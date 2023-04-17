#include <iostream>
#include <iomanip>
#include <fstream>
#include <cctype>
#include <cstring>

using namespace std;

void mainMenu();
void admin();
void student();

struct subject {
	string subjName;
	double crdHour;
};

struct Student {
	string stuName,course;
	
	int age;
	
};

int main() {
	cout << "UBAR" << endl;
	mainMenu();
	system("pause");
	return 0;
}

void mainMenu() {
	bool loop = true;
	string opt;
	do {
		cout << "\n==============================\n";
		cout << "|Main Menu|" << endl;
		cout << "================================\n";
		cout << "Choose your role. \n";
		cout << "1. School staff\n";
		cout << "2. Students\n";
		cout << "Q. exit the program.\n";
		cin >> opt;
		if (opt == "1")
			admin();
		else if (opt == "2")
			student();
		else if (opt == "Q"||opt=="q")
			cout << "Exit the program" << endl;
		else
			cout << "Please Enter a valid options" << endl;

	} while (opt!="Q");
	
}// staff fxn- key in grade,subject(add), (delete), (modify), (save), (checkin)
// student - (search),(view), assume alrdy have the students database. 
// calculate cgpa, show status, 

void admin() {


}
void student() {

}
