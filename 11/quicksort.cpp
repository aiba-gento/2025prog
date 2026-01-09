#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>

int mid3(int x, int y, int z)
{
	if (x > y)
	{
		if (y < z)
		{
			if (x < z)
				return y;
			else
				return z;
		}
		else
			return x;
	}
	else
	{
		if (x < z)
		{
			if (y > z)
				return z;
			else
				return y;
		}
		else
			return x;
	}
}

void quicksort(int a[], int left, int right)
{
	int i = left, j = right;
	int pivot = mid3(a[left], a[(left + right) / 2], a[right]);
	int temp;

	while (i <= j)
	{
		while (a[i] < pivot)
			i++;
		while (a[j] > pivot)
			j--;
		if (i <= j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}

	if (left < j)
		quicksort(a, left, j);
	if (i < right)
		quicksort(a, i, right);
}

int main(int argc, char *argv[])
{
	int i, c = 0, n[100];

	try
	{
		std::ifstream readfile(argv[1]);
		while (!readfile.eof())
		{
			readfile >> n[c];
			c++;
		}
		c--;
		std::cout << std::endl;
		std::cout << "User = " << getenv("USER") << " / ";
		std::cout << "Elements = " << c << std::endl;
		for (i = 0; i < c; i++)
			std::cout << n[i] << ":";
		std::cout << std::endl;

		std::cout << "Quick sort....." << std::endl;
		quicksort(n, 0, c - 1);
		for (i = 0; i < c; i++)
			std::cout << n[i] << ":";
		std::cout << std::endl
				  << "Done." << std::endl;
	}
	catch (int e)
	{
		std::cerr << "Error!!" << std::endl;
	}
	return 0;
}
