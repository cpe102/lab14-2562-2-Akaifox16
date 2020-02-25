#include <iostream>
using namespace std;

int main(){
	//Write your code here.
	int a = 5;
	char b = 'A';
	char &c = b;
	int  *x = &a;
	char *y = &b;
	int **z = &x;
	cout  << "Address a = " << &a << " a = " << a
		  << "\nAddress b = "<< (void *)&b << " b = " << b
		  << "\nAddress c = "<< (void *)&c << " c = " << c
		  << "\nAddress x = "<< &x << " x = " << x
		  << "\nAddress y = "<< (void *)&y << " y = " << y
		  << "\nAddress z = "<< &z << " z = " << z << endl;
	
	c = 'F'; 
	cout << "---------------------\na = " << a 
		 << "\nb = " << b
		 << "\nc = " << c 
		 << "\nx = " << x 
		 << "\ny = " << (void *)y 
		 << "\nz = " << z <<'\n';

	*y = 'W';
	 cout << "-------------------\na = " << a 
		 << "\nb = " << b
		 << "\nc = " << c 
		 << "\nx = " << x 
		 << "\ny = " << (void *)y 
		 << "\nz = " << z <<'\n';

	*x = 6;
	cout << "--------------\na = " << a 
		 << "\nb = " << b
		 << "\nc = " << c 
		 << "\nx = " << x 
		 << "\ny = " << (void *)y 
		 << "\nz = " << z <<'\n';

	**z = 7;
	cout << "----------------------\na = " << a 
		 << "\nb = " << b
		 << "\nc = " << c 
		 << "\nx = " << x 
		 << "\ny = " << (void *)y 
		 << "\nz = " << z <<'\n';
	return 0;
}
