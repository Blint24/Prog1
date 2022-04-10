#include "std_lib_facilities.h"

int main(){
	vector<double> vd;
	ifstream in("double.txt");
	double d;
	while(in>>d){
		vd.push_back(d);
	}
	for(double i:vd)
		cout << i << "\n";
	vector<int> vi(vd.size());
	double vdsum = 0;
	double visum = 0;
	cout << "vd and vi in pairs: \n";
	for (int i = 0; i < vd.size(); ++i)
	{
		vi[i] = vd[i];
		vdsum += vd[i];
		visum += vi[i];
		cout << vd[i] << "---" << vi[i] << endl;
	}
	cout << "The sum of vd: " << vdsum << endl;
	cout << "The difference between the sum of vd and vi: " << vdsum-visum << endl;
	cout << "Vd reversed: " << endl;
	reverse(vd.begin(), vd.end());
	for(double i:vd)
		cout << i << "\n";
	vdsum /= double(vd.size());
	cout << "The mean value of the elements in vd: " << vdsum << endl;

	vector<double> vd2;
	for(double i:vd)
		if (i<vdsum)
		{
			vd2.push_back(i);
		}
	cout << "Elements of vd2: " << endl; 
	for(double i:vd2)
	cout << i << endl;
 	sort(vd.begin(),vd.end());
 	cout << "Vd sorted: " << endl;
 	for(double i:vd)
 		cout<<i<<endl;
}