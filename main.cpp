#include<iostream>
using namespace std;

int main() {
	int choice = 0;
	float num1=0, num2=0, Answer=0;
	cout << "Enter your numbers : " << endl;
	cin >> num1 >> num2 ;
	cout << "\n\nNow enter your choice of operation : \n" << endl;
	start:
	cout << "\n\nMenu\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n\n" << endl;
	cin >> choice ;
		switch (choice) {
		case 1: Answer = num1 + num2;
			break;
		case 2: Answer = num1 - num2;
			break;
		case 3: Answer = num1 * num2;
			break;
		case 4: 
			if (num2 == 0){
				cout << "\n\nDivision by Zero is not Possible! You will always get Infinity\n\n" << endl;
				Answer = num1 / num2;
			}
			else {
				Answer = num1 / num2;
			}
			break;

		default: cout << "Invalid choice Please retry : " << endl;
			goto start;
			break;
		}
	cout << "The Answer is :" << Answer<<endl;
	return 0;
}
