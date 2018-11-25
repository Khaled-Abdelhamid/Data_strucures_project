#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>



using namespace std;

int* type_generator(int no_of_enemies)
{
	int* array = new int[no_of_enemies];
	int random = 0;
	int rand();
	for (int i = 0; i < no_of_enemies; i++)
	{
		random = rand() % 100 + 1;
		if (random > 0 && random <= 20)		array[i] = 3;
		else if (random > 20 && random <= 50) array[i] = 2;
		else if (random > 50 && random <= 100) array[i] = 1;
	}

	return array;
}



int main()
{
	int no_enemies = 20;
	int* array = new int[no_enemies];
	array = type_generator(no_enemies);

	for (int i = 0; i < no_enemies; i++)
	{
		cout << array[i]<<endl;
	}
}