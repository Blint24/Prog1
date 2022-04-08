#include "std_lib_facilities.h"

	template<typename Iter1, typename Iter2>
	// requires Input_iterator<Iter1>() && Output_iterator<Iter2>()
	Iter2 coppy(Iter1 f1, Iter1 e1, Iter2 f2){
		for (; f1 != e1; ++f1)
		{
			*f2 = *f1;
			f2++;
		}
		return f2;
	}

int main(){
	//1.
	int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int> vect = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> l = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//4.
	int array2[10];
	for (int i = 0; i < 10; ++i)
	{
		array2[i] = array[i];
	}
	vector<int> vector2(vect);
	list<int> list2(l);	
	//5.
	for (int i = 0; i < 10; ++i)
	{
		array[i] += 2;
		vect[i] += 3;
	}
	for (int& i:l)
		i += 5;
	//7.
	coppy(array, array+10, vect.begin());
	coppy(l.begin(), l.end(), array);
	cout << "Array:";
	for(int i:array)
		cout << i << " ";
	cout << endl;

	cout << "Vector:";
	for(int i:vect)
		cout << i << " ";
	cout << endl;

	cout << "List:";
	for(int i:l)
		cout << i << " ";
	cout << endl;
	//8.
	if (find(vect.begin(), vect.end(), 3) != vect.end())
	{
		cout << "Position of number 3 in vector: ";
		for (int i = 0; i < vect.size(); ++i)
		{
			if (vect[i] == 3)
			{
				cout << i;
				cout << endl;
			}		
		}
	}
	else{
				cout << "Number 3 was not found!" << endl;
			}

	if (find(l.begin(), l.end(), 27) != l.end())
	{
		int p = 0;
		for(int i:l){
			if (i == 27)
				{
					cout << "Position of number 27 in vector: ";
					cout << p << endl;
					break;
				}
				p++;
			}		
	}
	else{
				cout << "Number 27 was not found!" << endl;
			}
}