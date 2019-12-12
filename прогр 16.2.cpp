#include <iostream>

using namespace std;
int main()
{
	int N, i, b, c = 0, n, i1, co, tf;
	cin >> N;
	n = N;
	int* array = new int[N];
	int* barray = new int[N];
	int* carray = new int[N];
	for (i = 0; i < N; i++)
		cin >> array[i];
	barray[0] = array[0];
	for (i = 0; i < N; i++)
	{
		b = array[i];
		co = 0;
		for (i1 = 0; i1 < N; i1++)
			if (array[i1] == b) co++;
		if (co == 2)
			carray[i] = array[i];
	}
	for (i = 0; i < N; i++)
	{
		tf = 1;
		for (i1 = 0; i1 < N; i1++)
			if (array[i] == carray[i1]) tf = 0;
		if (tf == 1)
		{
			barray[c] = array[i];
			c++;
		}
	}
	for (i = 0; i < c; i++)
		cout << barray[i] << " ";
}