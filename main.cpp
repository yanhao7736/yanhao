#include "iostream"
#include"string"
#include "Sales_data.h"
using namespace std;
int main()
{
	//struct Sales_date { string bookNo; unsigned uints_sold = 0; double revenue = 0.0; };
	Sales_data date1, date2;
	double price = 0;
	cin >> date1.bookNo >> date1.uints_sold >> price;
	date1.revenue = date1.uints_sold * price;
	cin >> date2.bookNo >> date2.uints_sold >> price;
	date2.revenue = date2.uints_sold * price;
	if (date1.bookNo == date2.bookNo)
	{
		unsigned totalcnt = date1.uints_sold + date2.uints_sold;
		double totalrevenue = date1.revenue + date2.revenue;
		cout << date1.bookNo << " " << totalcnt << " " << totalrevenue<<" ";
		if (totalcnt != 0)
		{
			cout << totalrevenue / totalcnt << endl;
		}
		else
		{
			cout << "no sale" << endl;
		}
		return 0;
	}
	else
	{
		cout << "data must refer to the same ISBN" << endl;
		return -1;
	}

}