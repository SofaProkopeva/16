#include <iostream>

using namespace std;
int main()
{
	float n, tf;
	int i, c, min, max, mini = 0, maxi = 0, N, i1 = 0;
	cin >> N;
	n = N;
	float* array = new float[N];
	float* barray = new float[N + 2];
	for (i = 0; i < N; i++) 
		cin >> array[i];
	min = INT_MAX;
	max = INT_MIN;
	for (i = 0; i < N; i++) 
	{
		if (array[i] < min) 
		{
			min = array[i];
			mini = i;
		}
		if (array[i] > max) 
		{
			max = array[i];
			maxi = i;
		}
	}
	for (i = 0; i < N + 2; i++) 
	{
		tf = 0;
		if (i1 == mini && i1 == 0) 
		{
			barray[i1] = 0;
			i++;
		}
		else 
			if (i1 == mini)
			{
				barray[i] = 0;
				i++;
			}
		if (i1 == maxi)
		{
			barray[i + 1] = 0;
			tf = 1;
		}
		if (i < N + 2 && i >= 0) 
			barray[i] = array[i1];
		if (tf == 1)
			i++;
		if (i1 < N) 
			i1++;
	}
	for (i = 0; i < N + 2; i++) 
		cout << barray[i] << " ";
}