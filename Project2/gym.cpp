#include <iostream>
#include <string>
using namespace std;

int main()
{
	string customer_name ="", membership_type="";
	int number_sessions = 0;

	cout << "Customer name: ";
	getline(cin, customer_name);  //Allows input separated by a space

	cout << "Training Session per month: ";
	cin >> number_sessions;

	cout << "Membership Type: ";
	cin.ignore(INT_MAX, '\n');
	getline(cin, membership_type);

	const double init_fee_regular = 19.99;       // Constant variable
	const double training_session_cost = 10.00;  // Constant variable
	double member_fee = 0, total_cost = 0;

	cout.setf(ios::fixed);    //Fixes the number of decimal digits to 2.
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	if (customer_name.length() == 0) {  //Empty string. Could be replaced by: if (customer name == "")
		cout << "--- You must enter a customer name." << endl;
		return (1);
	}

	else if (number_sessions < 0) {
		cout << "--- The sessions used must not be negative." << endl;
		return (1);
	}
	
	else if ((membership_type != "Regular") && (membership_type != "Executive")) {  
		cout << "--- The membership type is not valid." << endl;
		return (1);
	}

	else if (membership_type == "Regular") {
		member_fee = 30.00;
		if (number_sessions > 0) {
			total_cost = (number_sessions * training_session_cost) + member_fee;
			cout << "--- The membership fee for " << customer_name << " is $" << total_cost << endl;
		}
		else if (number_sessions == 0) {
			total_cost = member_fee + init_fee_regular;
			cout << "--- The membership fee for " << customer_name << " is $" << total_cost << endl;	
		}
	}

	else if (membership_type == "Executive") {
		member_fee = 55.00;
		if (number_sessions > 0) {
			total_cost = (number_sessions * training_session_cost) + member_fee;
			cout << "--- The membership fee for " << customer_name << " is $" << total_cost << endl;
		}
		else if (number_sessions == 0) {
			total_cost = member_fee;
			cout << "--- The membership fee for " << customer_name << " is $" << total_cost << endl;
		}
	}

}