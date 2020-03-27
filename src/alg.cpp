#include<iostream>
using namespace std;
	int cbinsearch(int* a, int size, int value)
	{
		int left = 0, right = size;
		int  frstR= size;
		while (right >= left) {
			int mid = (right + left) / 2;
			if (value < a[mid]) {
				frstR = mid;
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}

		left = 0, right = size - 1;
		int frstL = -1;
		while (right >= left) {
			int mid = (right + left) / 2;
			if (value <= a[mid]) {
				frstL = mid;
				right = mid - 1;
			}
			else {
				left = mid+ 1;
			}
		}
		if (frstL == -1) return frstL;
		else return frstR - frstL;

	}


	

int main()
{
	int res = 0;
	const int size = 10;
	int arr[size] = { 0,2,3,3,4,4,4,7,8,9};
	int value = 4;
	res = cbinsearch(arr, size, value);
	std::cout << res << std::endl;
	return 0;
}
