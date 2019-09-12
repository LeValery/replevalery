#include <iostream>
using namespace std;

void bsearch(int* array, int x, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] < x)
		{
			cout << "Index: " << i;
			break;
		}
	}
}
int main()
{
	int n;
	cout << "Number of elements: ";
	cin >> n;
	cout << "Input array: " << endl;
	int* array = new int[n];
	for (int i = 0; i < n; i++)
		cin >> array[i];
	int X;
	cout << "Input X: ";
	cin >> X;
	bsearch(array, X, n);
	return 0;
}
