#include <iostream>
using namespace std;

int arr[20];
int n;
int i;


void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array :";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

}