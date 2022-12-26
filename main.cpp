#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, b, c, d = 0;

	float x1 = 0.0f;
	float x2 = 0.0f;


	cout<<"이차방정식 ax^2+bx+c=0"<< endl;

	cout << "a를 입력하세요" << endl;
	cin >> a;
	cout << "b를 입력하세요" << endl;
	cin >> b;
	cout << "c를 입력하세요" << endl;
	cin >> c;
	
	x1 = (- b + (float)sqrt(b * b - 4 * a * c)) / 2 * a; //근의 방정식

	x2 = (- b - (float)sqrt(b * b - 4 * a * c)) / 2 * a; // 근의 방정식


	cout << x1 << endl;
	cout << x2 << endl;




    return 0;

}