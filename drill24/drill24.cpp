#include "std_lib_facilities.h"
#include "Matrix.h"
#include <complex>


void sqrtt(){
	int v;
	cin >> v;
	double out = sqrt(v);
	if (out < numeric_limits<double>::max())
	{
		cout << out << endl;
	}
	else
	{
		cout << "No square root" << endl;
	}
}

Numeric_lib::Matrix<double, 2> mult_table(int n,int m){
	Numeric_lib::Matrix<double, 2> out(n+1,m+1);
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			out[i][j] = i*j;
		}
	}
	return out;
}

int main(){
	cout << "Sizeof char: " << sizeof(char) << "bytes." << endl;
	cout << "Sizeof short: " << sizeof(short) << "bytes." << endl;
    cout << "Sizeof int: " << sizeof(int) << "bytes." << endl;
    cout << "Sizeof long: " << sizeof(long) << "bytes." << endl;
    cout << "Sizeof float: " << sizeof(float) << "bytes." << endl;
    cout << "Sizeof double: " << sizeof(double) << "bytes." << endl;
    cout << "Sizeof int*: " << sizeof(int*) << "bytes." << endl;
    cout << "Sizeof double*: " << sizeof(double*) << "bytes." << endl;

    Numeric_lib::Matrix<int> a(10);
    cout << "Sizeof Matrix<int>(10) : " << sizeof(a) << "bytes." << endl;
    Numeric_lib::Matrix<int> b(100);
    cout << "Sizeof Matrix<int>(100) : " << sizeof(b) << "bytes." << endl;
    Numeric_lib::Matrix<double> c(10);
    cout << "Sizeof Matrix<double>(10) : " << sizeof(c) << "bytes." << endl;
    Numeric_lib::Matrix<int, 2> d(10, 10);
    cout << "Sizeof Matrix<int, 2>(10, 10) : " << sizeof(d) << "bytes." << endl;
    Numeric_lib::Matrix<int, 3> e(10, 10, 10);
    cout << "Sizeof Matrix<int, 3>(10, 10, 10) : " << sizeof(e) << "bytes." << endl;

    cout << "Number of elements in a:" << a.size() << endl;
    cout << "Number of elements in b:" << b.size() << endl;
    cout << "Number of elements in c:" << c.size() << endl;
    cout << "Number of elements in d:" << d.size() << endl;
    cout << "Number of elements in e:" << e.size() << endl;

    cout << "Write a number to return square: ";
    sqrtt();

    cout << "Write 10 floating-point values: " << endl;
    Numeric_lib::Matrix<double> ma(10);
    for (int i = 0; i < 10; ++i)
    {
    	double in;
    	cin >> in;
    	ma[i] = in;
    }
    for (int i = 0; i < 10; ++i)
    {
    	cout << ma[i] << " ";
    }
    cout << endl;
    cout << "Write 2 int for multiplication table: " << endl;
    {
    	int n,m;
    	cin >> n >> m;
    	Numeric_lib::Matrix<double, 2> mult(mult_table(n,m));
    	for (int i = 1; i <= n; ++i)
    	{
    		for (int j = 1; j <= m; ++j)
    		{
    			cout << mult[i][j] << " ";
    		}
    		cout << endl;
    	}
    }

    cout << "Write 10 complex numbers: " << endl;
    complex<double> cd;
    Numeric_lib::Matrix<complex<double>> comp(10);
    complex<double> sum;
    for (int i = 0; i < 10; ++i)
    {
    	cin >> cd;
    	comp[i] = cd;
    	sum += cd;
    }
    cout << "The sum of complex numbers: " << sum << endl;

    cout << "Write 6 ints: " << endl;
    Numeric_lib::Matrix<int, 2> m(2,3);
    for (int i = 0; i < 2; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		cin >> m[i][j];
    	}  	
    }

    for (int i = 0; i < 2; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		cout << m[i][j] << " ";
    	}
    	cout << endl;
    }
}