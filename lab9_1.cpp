#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	unsigned short i = 1;
	bool isContinue = true;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
	    bool isWrong = false;
	    char grade;
		cout << "Student [" << i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		switch (grade) {
		    case 'A': count[0]++; break;
		    case 'B': count[1]++; break;
		    case 'C': count[2]++; break;
		    case 'D': count[3]++; break;
		    case 'F': count[4]++; break;
		    case '0': isContinue = false; break;
		    default: isWrong = true;
		}
		
		if (isWrong)
		    cout << "Wrong input. Please input again.\n";
		else
		    i++;
	} while(isContinue);
	
	cout << "In total " << i-2 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<", ";
	return 0;
}
