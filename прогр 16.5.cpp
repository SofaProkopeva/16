#include <iostream>

using namespace std;
int main()
{
	float c = 0;
	int i, N, i1, tf = 0;
	cin >> N;
	i1 = N;
	float* array = new float[N];
	for (i = 0; i < N; i++) 
		cin >> array[i];
	for (i = 0; i < N; i++) 
		if (array[i] > 0)
			tf++;
	float* barray = new float[N + tf];
	for (i = N + tf; i >= 0; i--) 
	{
		if (i < N + tf && i >= 0)
			barray[i] = array[i1];
		if (array[i1] > 0) 
		{
			barray[i - 1] = 0;
			i--;
		}
		i1--;
	}
	for (i = 0; i < N + tf; i++) 
		cout << barray[i] << " ";
}
