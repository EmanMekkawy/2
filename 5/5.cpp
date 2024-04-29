// 5
#include <iostream>
using namespace std; 
int main()
{
	int costprice;
	cout << "the coctprice=";
	cin >> costprice;
	int sellingprice;
	cout << "sellingprice=";
	cin >> sellingprice;
	int R;
	R = sellingprice - costprice;
	cout << "the result=" << R;
	if (R > 0)
	{
		cout << "profit";
	}
	else {
		cout << "loss";
	}
	return 0;

}
  

