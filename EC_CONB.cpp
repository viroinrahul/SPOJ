#include <bits/stdc++.h>

using namespace std;

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
		int num;
		cin >> num;
		if (num % 2 == 0)
		{
			int arr[100];
			int i;
			for (i = 0; num != 0; i++)
			{
				arr[i] = num % 2;
				num = num / 2;
			}

			int start = 0;
			int end = i - 1;

			while (start < end)
			{
				int temp = arr[start];
				arr[start] = arr[end];
				arr[end] = temp;
				start++;
				end--;
			}

			int res = 0;

			for (i = i - 1; i >= 0; i--)
			{
				res = res + (arr[i] * pow(2, i));
			}

			cout << res << endl;
		}
		else
			cout << num << endl;

		t--;
	}

	return 0;
}