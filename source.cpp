// Work from:
// Programming Principles and Practice using C++ by Bjarne Stroustrup
#include<iostream>
#include<string>
#include<list>
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

// program that reads a stream of words and checks for repeating words
// added exit functionality not in the book.
int chapter_3_5() {
	cout << "Please enter a string. Type 'exit' to exit \n";
	string previous = " ";
	string current;
	while (cin >> current) {
		if (current == "exit") {
			break;
		}
		if (previous == current) {
			cout << "repeated word: " << current << "\n";
		}
		previous = current;
	}

	return 0;
}



// upgraded example of find repeated words
int chapter_3_6() {
	cout << "please enter a string. Type 'exit' to exit. \n";
	int number_of_words = 0;
	string previous = " ";
	string current;
	while (cin >> current) {
		++number_of_words;
		if (current == "exit") {
			break;
		}
		if (previous == current) {
			cout << "word number " << number_of_words << " repeated " << current << "\n";
		}
		previous = current;
	}

	return 0;
}

int chapter_3_ex_1() {
	// goal: write a program that converts milkes to kilometers

	cout << "Please enter miles and I will convert it to kilometers: \n";
	double miles;
	cin >> miles;
	// input isn't sanitized, but I suppose that will be learned later
	double kilometers = miles * 1.609;
	cout << miles << " miles equals " << kilometers << " kilometers. \n";

	return 0;
}

int chapter_3_ex_2() {
	// goal write a program that prolmpts the user to enter two int values.
	// report: which one is larger, smaller, sum, difference, product, and ratio
	cout << "Please enter two numbers: ";
	int val1;
	int val2;
	cin >> val1 >> val2;
	if (val1 == val2) {
		cout << "The numbers are the same size.\n";
	}
	else if (val1 > val2) {
		cout << val1 << " is larger than " << val2 << "\n.";
	}
	else if (val2 > val1) {
		cout << val2 << " is larger than " << val1 << "\n.";
	}
	else {
		// should never reach
	}
	cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << "\n.";
	cout << "The difference between " << val1 << " and " << val2 << " is " << abs(val1 - val2) << "\n.";
	cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2 << "\n.";
	cout << "The ratio of " << val1 << " and " << val2 << " is " << (double) val1 / val2 << "\n.";

	return 0;
}

int chapter_3_ex_3() {
	cout << "Please enter 3 numbers: ";
	list<int> myIntList;
	int int1;
	int int2;
	int int3;
	cin >> int1 >> int2 >> int3;
	myIntList.push_back(int1);
	myIntList.push_back(int2);
	myIntList.push_back(int3);
	myIntList.sort();

	list<int>::iterator it;

	for (it = myIntList.begin(); it != myIntList.end(); ++it) {
		cout << *it << ", ";
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
	// chapter_3_4_3();
	// chapter_3_5();
	// chapter_3_6();
	// chapter_3_ex_1();
	// chapter_3_ex_2();
	chapter_3_ex_3();



}
