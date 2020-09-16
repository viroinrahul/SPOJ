#include <bits/stdc++.h>

using namespace std;

int reverse(int num)
{
	int revno = 0;
	while (num != 0)
	{
		revno = (revno * 10) + (num % 10) ;
		num = num / 10;
	}
	return revno;
}

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input_try.txt", "r", stdin);
	// for getting output to output.txt
	freopen("output_try.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t > 0)
	{
		int n1, n2;
		cin >> n1 >> n2;
		int revn1, revn2;
		revn1 = reverse(n1);
		revn2 = reverse(n2);

		int res = revn1 + revn2;
		cout << reverse(res) << endl;

		t--;
	}


	return 0;
}