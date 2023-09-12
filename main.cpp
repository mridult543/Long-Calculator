#include "BigNumber.h"
#include <iostream>
using namespace std;

int main() {
	string str1,str2;
    cout<<"       Instructions    "<<endl;
    cout<<"You need to enter two number,then it will ask for your choice."<<endl;
	cout<<"Enter 1 for Addition."<<endl;
	cout<<"Enter 2 for Subtraction."<<endl;
	cout<<"Enter 3 for Multiplication."<<endl;
	cout<<"Enter 4 for Division."<<endl;
	while(cin>>str1>>str2) {
		zbz::BigNumber a = str1;
		zbz::BigNumber b = str2;
		cout<<"Enter Your Choice:"<<endl;
		int choice;
		cin>>choice;
		if(choice==3){
            cout << a << " * " << b << " = " << a * b << endl;
		}
		else if(choice==1){
            cout << a << " + " << b << " = " << a + b << endl;
		}
		else if(choice==2){
            cout << a << " - " << b << " = " << a - b << endl;
		}
		else if(choice==4){
            cout << a << " / " << b << " = " << a / b << endl;
		}
		else{
            cout<<"Invalid Choice"<<endl;
		}
	}

	 return 0;
}
