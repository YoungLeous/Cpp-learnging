#include <iostream> //use iostream library
#include "add.h"
#include "sub.h"
using namespace std;

int main(void) //main function
{
	int a = 0;
	int b = 0;
	cout<<"please input two numbers a and b"<<endl;
	cin >> a >> b;
	cout <<"a+b="<< add(a,b) << endl;
	cout <<"a-b="<<sub(a,b) << endl;
	return 0;

}