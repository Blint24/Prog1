#include "std_lib_facilities.h"
#include <map>

void rtm(map<string,int>& m){
	string t;
	cin >> t;
	cin >> m[t];
}

int main(){
	map<string,int> msi;
	msi["korte"] = 10;
	msi["alma"] = 4;
	msi["szilva"] = 5;
	msi["barack"] = 11;
	msi["citrom"] = 2;
	msi["narancs"] = 15;
	msi["mango"] = 3;
	msi["dinnye"] = 12;
	msi["eper"] = 17;
	msi["cseresznye"] = 1;
	for (pair<string, int>i:msi)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	msi.clear();
	cout << "Write ten elements in pairs: " << endl;
	for (int i = 0; i < 10; ++i)
	{
		rtm(msi);
	}
	cout << "10 pairs: \n";
	int sum = 0;
	for (pair<string, int>i:msi)
	{
		cout<<i.first<<" "<<i.second<<endl;
		sum += i.second;
	}
	cout << "The sum of intiger values: " << sum << endl;;

	map<int,string> mis;
	for (pair<string, int>i:msi)
	{
	mis[i.second] = i.first;
	}
	cout << "The elements of mis: \n";
	for(pair<int, string>i:mis)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
}