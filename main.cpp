#include <iostream>
#include <cmath>

using namespace std;

int main()
{
		int a = 0;			
		int b = 0;
		int c = 0;
		double x1, x2;		
		int number;			
		cout << "a를 입력하세요" << endl;
		cin >> a;
		cout << "b를 입력하세요" << endl;
		cin >> b;
		cout << "c를 입력하세요" << endl;
		cin >> c;
	
		//판별식
		number = b * b - (4 * a * c);
		cout << number << endl;
	
		if (number == 0)	//근 1개
		{
			x1 = (-b + (sqrt(b * b - 4 * a * c))) / (2 * a);
			cout << "근이 1개 이며 " << x1 << " 입니다." << endl;
		}
		else if (number > 0) //근 2개
		{
			x1 = (-b + (sqrt(b * b - 4 * a * c))) / (2 * a);
			x2 = (-b - (sqrt(b * b - 4 * a * c))) / (2 * a);
			cout << "근이 2개 이며 " << x1 << ", " << x2 << " 입니다." << endl;
		}
		else if (number < 0) //근 0개
		{
			cout << "근이 0 개 입니다." << endl;
		}




		//for (int j = 5; j > 0; j--)
		//{
		//	
		//	for (int i = 0; i < j; i++)
		//	{
		//		cout << "*";
		//	}
		//
		//	cout << endl;
		//}









	return 0;
}