#include "std_lib_facilities.h"
#include <fstream>
#include <algorithm>
#include <iostream>
#include <list>

struct Item { 
	string name; 
	int iid; 
	double value;
	void print(ostream& out){
		out << name << " " << iid << " " << value << endl;
		}
	};

int main(){
	vector<Item> vi;
	ifstream in("gyum.txt");
	for (int i = 0; i < 10; ++i)
	{
		string a;
		int b;
		double c;
		in>>a>>b>>c;
		vi.push_back({a,b,c});
	}
	for(Item i:vi)
		i.print(cout);

	sort(vi.begin(),vi.end(), [](Item left, Item right) {return left.name < right.name;});
	cout << "\nSorted by name: \n";
	for(Item i:vi)
		i.print(cout);

	sort(vi.begin(), vi.end(), [](Item left, Item right) {return left.iid < right.iid;});
	cout << "\nSorted by iid: \n";
	for(Item i:vi)
		i.print(cout);

	sort(vi.begin(), vi.end(), [](Item left, Item right) {return left.value > right.value;});
	cout << "\nSorted by value: \n";
	for(Item i:vi)
		i.print(cout);
	//5.
	vi.push_back({"horse shoe",99,12.34});
	vi.push_back({"Canon S400",9988,499.95});
	//6.
	string n;
	string n2;
	cout << "\nWhat to remove (by name): ";
	cin >> n;
	cout << " and ";
	cin >> n2;
	for (auto i = vi.begin();i != vi.end() ; ++i)
	{
		if ((*i).name == n)
		{
			vi.erase(i);
		}
		if ((*i).name == n2)
		{
			vi.erase(i);
		}
	}
	for(Item i:vi)
		i.print(cout);
	//7.
	int d = 0;
	int d2 = 0;
	cout << "\nWhat to remove (by iid): ";
	cin >> d;
	cout << " and ";
	cin >> d2;
	for (auto i = vi.begin();i != vi.end() ; ++i)
	{
		if ((*i).iid == d)
		{
			vi.erase(i);
		}
		if ((*i).iid == d2)
		{
			vi.erase(i);
		}
	}
	for(Item i:vi)
		i.print(cout);
	//List
	{
	cout << "---------List---------" << endl;
	list<Item> vi;
	ifstream inn("gyum.txt");
	for (int i = 0; i < 10; ++i)
	{
		string a;
		int b;
		double c;
		inn>>a>>b>>c;
		vi.push_back({a,b,c});
	}
	for(Item i:vi)
		i.print(cout);

	vi.sort([](Item left, Item right) {return left.name < right.name;});
	cout << "\nSorted by name: \n";
	for(Item i:vi)
		i.print(cout);

	vi.sort([](Item left, Item right) {return left.iid < right.iid;});
	cout << "\nSorted by iid: \n";
	for(Item i:vi)
		i.print(cout);

	vi.sort([](Item left, Item right) {return left.value > right.value;});
	cout << "\nSorted by value: \n";
	for(Item i:vi)
		i.print(cout);

	vi.push_back({"horse shoe",99,12.34});
	vi.push_back({"Canon S400",9988,499.95});

	//6.
	string na;
	string na2;
	cout << "\nWhat to remove (by name): ";
	cin >> na;
	cout << " and ";
	cin >> na2;
	for (auto i = vi.begin();i != vi.end() ; ++i)
	{
		if ((*i).name == na)
		{
			i = vi.erase(i);
			i--;
		}
		if ((*i).name == na2)
		{
			i = vi.erase(i);
			i--;
		}
	}
	for(Item i:vi)
		i.print(cout);
	//7.
	int dd = 0;
	int dd2 = 0;
	cout << "\nWhat to remove (by iid): ";
	cin >> dd;
	cout << " and ";
	cin >> dd2;
	for (auto i = vi.begin();i != vi.end() ; ++i)
	{
		if ((*i).iid == dd)
		{
			i = vi.erase(i);
			i--;
		}
		if ((*i).iid == dd2)
		{
			i = vi.erase(i);
			i--;
		}
	}
	for(Item i:vi)
		i.print(cout);
	}
}