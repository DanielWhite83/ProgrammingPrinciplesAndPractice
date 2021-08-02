// Work from:
// Programming Principles and Practice using C++ by Bjarne Stroustrup
#include<iostream>
#include<string>
using namespace std;



// simple hello world function
// using cout with <iostream> rather than the deprecated "std_lib_facilities.h" in the book
int chapter_2_2() // C++ programs start by executing the function main
{
	cout << "Hello, World!\n"; // output “Hello, World!”
	return 0;
}



// hello world function. I used cin.get() rather than the keep_window_open() function from the book
int chapter_2_5() {
	cout << "Hello, World!\n";
	cin.get();
	return 0;

}

// first attempt to get input from the user
int chapter_3_1() {
	cout << "Please enter your first name followed by enter\n";
	string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name << "!\n";

	return 0;
}


// get a float from a user and output some math
int chapter_3_4() {
	cout << "Please enter a floating-point value: ";
	double n;
	cin >> n;
	cout << "n==" << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << n * 3
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< "\n"; // final new line


	return 0;
}


// add strings
int chapter_3_4_2() {
	cout << "Please enter your first and last name: \n";
	string first;
	string last;
	cin >> first >> last; // interestingly, it counts two words a separate strings in the command line
	string name = first + " " + last;
	cout << "Hello, " << name << "\n";

	// if we want to get them as separate lines, we must use cin.getline instead

	return 0;
}


// compare two strings
int chapter_3_4_3() {
	cout << "Please enter two names: \n";
	string first;
	string second;
	cin >> first >> second; // interestingly, it counts two words a separate strings in the command line
	
	if (first == second) {
		cout << "That's the same name twice";
	}
	else if (first < second) {
		cout << first << " is alphabetically before " << second << "\n";
	}
	else if (second < first) {
		cout << second << " is alphabetically before " << first << "\n";
	}
	else {
		// this should never be reached
	}
	return 0;
}



int main() // C++ programs start by executing the function main
{
	
	// I am putting the code into functions rather than making separate programs for each activity
	
	// chapter_2_2();
	// chapter_2_5();
	// chapter_3_1();
	// chapter_3_4();
	// chapter_3_4_2();
	chapter_3_4_3();


}
