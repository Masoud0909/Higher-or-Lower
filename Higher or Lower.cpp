//a program that declares an array of 100 doubles. The program asks the user to enter a number
//N between 100, and then:
//-initializes the first N elements of the array to random numbers between 1 and 100.
//- calculates the average of these numbers and displays it.
//- A final loop displays the elements of the array, each on a line, with an indication as to
//whether that number is lower or higher than the average.
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void initializeArray(int arr[], int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 + 1;
	}
}
double average(int arr[], int N) {
	double sum = 0;
	double av = 0;
	for (int i = 0; i < N; i++) {
		sum += arr[i];
		av = sum / N;
	}
	cout << "The average is: " << av <<endl;
	return av;
}

void highlow(int arr[], double av) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] > av) {
			cout << arr[i] << "--- Higher than Average! " << endl;
		}
		else {
			cout << arr[i] << "--- Lower than Average!" << endl;
		}
	}
}

int main()
{
	int array[100];
	initializeArray(array, 100);
	for (int i = 0; i < 100; i++) {
		cout << array[i] << " ";
	}
	cout << "\n" << endl;
	int n;
	cout << "Choose a number: ";
	cin >> n;

	highlow(array, average(array, n));
	return 0;
}
