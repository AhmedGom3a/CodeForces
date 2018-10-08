#include<iostream>
//#include<stack>
using namespace std;
int main()
{
	int max1 = 0, min1 = 0, remain = 0;
	//cout << "Enter number of remaining cars \n";
	cin >> remain;
	int* remaining = new int[remain];
	//cout << "Enter IDs of ' " << remain << " ' remaining cars \n";
	for (int i = 0; i < remain; i++) cin >> remaining[i];

	max1 = remaining[0];
	min1 = max1;
	for (int i = 0; i < remain; i++)
	{
		if (max1 < remaining[i]) max1 = remaining[i];

		else if (min1 > remaining[i]) min1 = remaining[i];
	}

	int listsize = max1 - min1 + 1;
	//Following Part counts stolen cars using stack "Not Efficient"
	/*
	int* sum = new int[listsize];
	for (int j = 0; j < listsize; j++) sum[j] = min1 + j;

	int stolen = 0, key = 0;
	stack<int> missing;
	for (int j = 0; j < listsize; j++)
	{
	for (int i = 0; i < remain; i++)
	{
	if (sum[j] == remaining[i]) key = 1;
	}
	if (key == 0) {stolen++; missing.push(sum[j]);}
	key = 0;
	}
	*/

	int stolen = listsize - remain;
	cout << stolen;

	//cout << "number of missing cars is ' " << stolen << " '\n";
	//Following part prints IDs Of Stolen Cars
	/*
	cout << "stolen cars IDs are : ";
	int key = 0;
	for (int j = 0; j <listsize; j++)
	{
	for (int i = 0; i < remain; i++)
	{
	if ( j+min1== remaining[i]) key = 1;
	}
	if (key == 0){ cout << j + min1 << "   "; }
	key = 0;
	}
	*/
	cout << endl;
}





