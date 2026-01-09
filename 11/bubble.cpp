#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>

void bubblesort(int a[], int e)
{
	int l, k, temp;
	for (l = 0; l < e - 1; l++)
	{
		for (k = 0; k < e - l - 1; k++)
		{
			if (a[k] > a[k + 1])
			{
				temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
	}
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

		std::cout << "Bubble sort....." << std::endl;
		bubblesort(n, c);
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
