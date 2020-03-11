//Aaron Lim Cong Kai
//Full time
//I claim all credit for this assignment, FTA_AaronLCK_A1P2

#include <iostream>
#include <iomanip>

using namespace std;

	const float gst = 0.07;

int main()
{

	int P1, P2, P3, UP1, UP2, UP3, BA1, BA2, BA3;
	double C1, C2, C3, B1, B2, B3, BT, T1, T2, 
		  GST1, GST2, GST3, FC1, FC2, FC3,
		  GSTT, FCT;
		
	cout << fixed << showpoint << setprecision(2);

//ABC iphone store creation
	cout << "ABC iPhone Store Creation" << endl;

//print a row of '=' to cover until creation
	cout << setw(25) << setfill('=') << "=" << endl;

//leave a space
	cout << setfill(' ') << endl;

//print the value user want to input (can put comment, use cin.clear
//cin.ignore (100, '\n'), make sure user input 2 value
	cout << "No of iPhone 8 and unit cost: ";
	cin >> P1 >> C1;
	cin.clear();
	cin.ignore(100, '\n');
	cout << "No of iPhone 8+ and unit cost: ";
	cin >> P2 >> C2;
	cin.clear();
	cin.ignore(100, '\n');
	cout << "No of iPhone X and unit cost: ";
	cin >> P3 >> C3;
	cin.clear();
	cin.ignore(100, '\n');
	
//leave a space
	cout << endl;

//print summary of stock
	cout << "Summary of stock" << endl;
	cout << endl;

//print available item / quantity / unit cost / basic cost (use left)
	cout << "Available items"
		 << right << setw(11) << "Quantity"
		 << right << setw(11) << "Unit cost"
		 << right << setw(11) << "Basic cost"
		 << endl;

//print a row of '-' until basic cost
	cout << setw(48) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	
//print iphone 8, user input, user input, total of user input and 
//multiplication of user input * user input
	B1 = P1 * C1;
	B2 = P2 * C2;
	B3 = P3 * C3;
	cout << "iPhone 8" 
		 << right << setw(18) << P1
		 << right << setw(10) << C1
		 << right << setw(10) << B1
		 << "\n"
		 << "iPhone 8+" 
		 << right << setw(17) << P2
		 << right << setw(10) << C2
		 << right << setw(10) << B2
		 << "\n"
		 << "iPhone X" 
		 << right << setw(18) << P3
		 << right << setw(10) << C3
		 << right << setw(10) << B3
		 << endl;
	
//print a row of '=' until basic cost
	cout << setw(48) << setfill('=') << "=" << endl;
	cout << setfill(' ');

//print total cost, make sure align the value printed with basic cost
	BT = B1 + B2 + B3;
	cout << "Total Cost"
		 << right << setw(36) << BT
		 << endl;
	
//print a row of '=' until basic cost
	cout << setw(48) << setfill('=') << "=" << endl;
	cout << setfill(' ') << endl;	   

//swap the value of iphone 8 with iphone x, then swap iphone 8 with iphone 8+
	T1 = C3;
	T2 = C1;
	C1 = C2;
	C2 = T1;
	C3 = T2;
	
//print out same as summary of stock just add (updates)
	cout << "Summary of stock (Updates)" << endl;
	cout << endl;
	cout << "Available items"
		 << right << setw(11) << "Quantity"
		 << right << setw(11) << "Unit cost"
		 << right << setw(11) << "Basic cost"
		 << endl;
	cout << setw(48) << setfill('-') << "-" << endl;
	cout << setfill(' ');
//calculation
	B1 = P1 * C1;
	B2 = P2 * C2;
	B3 = P3 * C3;
	cout << "iPhone 8" 
		 << right << setw(18) << P1
		 << right << setw(10) << C1
		 << right << setw(10) << B1
		 << "\n"
		 << "iPhone 8+" 
		 << right << setw(17) << P2
		 << right << setw(10) << C2
		 << right << setw(10) << B2
		 << "\n"
		 << "iPhone X" 
		 << right << setw(18) << P3
		 << right << setw(10) << C3
		 << right << setw(10) << B3
		 << endl;

	cout << setw(48) << setfill('=') << "=" << endl;
	cout << setfill(' ');
//calculation
	BT = B1 + B2 + B3;
	cout << "Total Cost"
		 << right << setw(36) << BT
		 << endl;
	cout << setw(48) << setfill('=') << "=" << endl;
	cout << setfill(' ') << endl;
	
//print please place your order
 	cout << "Please place your request" << endl;


//space
	cout << endl;

//purchase iphone 8: 
//purchase iphone 8+: 
//purchase iphone x: 
//ALL USER INPUT
	cout << "Purchase iPhone  8: ";
	cin >> UP1;
	cin.clear();
	cin.ignore(100, '\n');
	cout << "Purchase iPhone 8+: ";
	cin >> UP2;
	cin.clear();
	cin.ignore(100, '\n');
	cout << "Purchase iPhone  X: ";
	cin >> UP3;
	cin.clear();
	cin.ignore(100, '\n');
		      
//space
	cout << endl;

//summary of purchase
	cout << "Summary of purchase" << endl;

//a row of '=' until purchase
	cout << setw(19) << setfill('=') << "=" << endl;

//space
	cout << setfill(' ') << endl;

//descriptions , quantity, unit cost, item cost, GST cost, final cost
//for all 3
	cout << "Description"
		 << right << setw(14) << "Quantity" 
		 << right << setw(12) << "Unit Cost"
		 << right << setw(10) << "Item cost" 
		 << right << setw(9) << "GST cost"
		 << right << setw(12) << "Final cost"
		 << endl;

//a row of '-' until final cost
	cout << setw(69) << setfill('-') << "-" << endl;
	cout << setfill(' ');

//iphone, quantity, unit cost, item cost, gst cost, final cost (CALCALATION)
	B1 = UP1 * C1;
	B2 = UP2 * C2;
	B3 = UP3 * C3;
	GST1 = B1 * gst;
	GST2 = B2 * gst;
	GST3 = B3 * gst;
	FC1 = GST1 + B1;
	FC2 = GST2 + B2;
	FC3 = GST3 + B3;
	cout << "iPhone 8"
		 << right << setw(18) << UP1
		 << right << setw(10) << C1
		 << right << setw(10) << B1
		 << right << setw(10) << GST1
		 << right << setw(10) << FC1
		 << "\n"
		 << "iPhone 8+"
		 << right << setw(17) << UP2
		 << right << setw(10) << C2
		 << right << setw(10) << B2
		 << right << setw(10) << GST2
		 << right << setw(10) << FC2
		 << "\n"
		 << "iPhone X"
		 << right << setw(18) << UP3
		 << right << setw(10) << C3
		 << right << setw(10) << B3
		 << right << setw(10) << GST3
		 << right << setw(10) << FC3
		 << endl;
//a row of '=' until final cost
	cout << setw(69) << setfill('=') << "=" << endl;
	cout << setfill(' ');

//print total cost, total cost for GST and final cost
	GSTT = GST1 + GST2 + GST3;
	FCT = FC1 + FC2 + FC3;
	cout << "Total Cost"
		 << right << setw(46) << GSTT
		 << right << setw(10) << FCT
		 << endl;

//a row of '=' until final cost
	cout << setw(69) << setfill('=') << "=" << endl;
	cout << endl;
//Summary of Daily transaction
	cout << "Summary of Daily Transaction" << endl;

//row of = until transaction
	cout << setw(28) << setfill('=') << "=" << endl;

//space
	cout << setfill(' ') << endl;

//item purchased, quantity, unit cost, sold, revenue, balance
	cout << "Item purchased"
		 << right << setw(12) << "Quantity" 
		 << right << setw(11) << "Unit Cost"
		 << right << setw(5) << "Sold"
		 << right << setw(10) << "Revenue"
		 << right << setw(10) << "Balance"
		 << endl;

//A ROW OF - UNTIL BALANCE + 2
	cout  << setw(64) << setfill('-') << "-" << endl;
	cout << setfill(' ');
//ihpne 8,+,X, quantity (total), unit cost, userinput, revenue, balance
	BA1 = P1 - UP1;
	BA2 = P2 - UP2;
	BA3 = P3 - UP3;
	cout << "iPhone 8"
		 << right << setw(18) << P1
		 << right << setw(10) << C1
		 << right << setw(6) << UP1
		 << right << setw(10) << FC1
		 << right << setw(10) << BA1
		 << "\n"
		 << "iPhone 8+"
		 << right << setw(17) << P2
		 << right << setw(10) << C2
		 << right << setw(6) << UP2
		 << right << setw(10) << FC2
		 << right << setw(10) << BA2
		 << "\n"
		 << "iPhone X"
		 << right << setw(18) << P3
		 << right << setw(10) << C3
		 << right << setw(6) << UP3
		 << right << setw(10) << FC3
		 << right << setw(10) << BA3
		 << endl;

//a row of =
	cout << setw(64) << setfill('=') << "=" << endl;
	cout << setfill(' ');

//total income, value start after revenue +2
	cout << "Total Income" 
		 << right << setw(42) << FCT
		 << endl;

//a row of =
	cout  << setw(64) << setfill('=') << "=" << endl;
}

