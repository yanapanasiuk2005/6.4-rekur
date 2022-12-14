#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int C = 0;
int S = 0;
void mas(int* a, int size, int i)
{
	a[i] = -50 + rand() % (101);
	cout << a[i] << " ";
	if (i < size - 1)
		mas(a, size, i + 1);
	else cout << endl;
}
void count(int* a, int size, int i, int C)
{
	if (a[i] > 0)
	{
		C++;
	}
	if (i < size - 1)
		count(a, size, i + 1, C);
	else {
		cout << endl;
		cout << "Count = " << C << endl;
	}
}
void sum(int* a, int i, int S)
{
	S += a[i];
	if (i > 0 && a[i] != 0)
		sum(a, i - 1, S);
	else {
		cout << endl;
		cout << "Sum = " << S << endl;
	}
}
void Sort(int* a, const int size, int i)
{
	if (a[i] >= -1 && a[i] <= 1) {
		int tmp = a[i];
		int j = 0;
		while (tmp > a[j])
			j++;
		for (int k = i - 1; k >= j; k--)
			a[k + 1] = a[k];
		a[j] = tmp;
	}
	if (i < size - 1)
		Sort(a, size, i + 1);
}
void mass(int* a, int size, int i)
{
	cout << a[i] << " ";
	if (i < size - 1)
		mass(a, size, i + 1);
	else cout << endl;
}
int main() {
	srand((unsigned)time(NULL));
	const int n = 100;
	int a[n];
	int i = 0;
	int userSize;
	cin >> userSize;
	mas(a, userSize, i);
	count(a, userSize, i, C);
	sum(a, userSize - 1, S);
	Sort(a, userSize, i);
	mass(a, userSize, i);
	return 0;
}
