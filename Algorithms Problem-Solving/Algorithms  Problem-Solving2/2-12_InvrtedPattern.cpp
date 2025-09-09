int ReadPositiveNumber(string Massege)
{
	int num = 0;

	do
	{
		cout << Massege << endl;
		cin >> num;

	} while (num <= 0);


	return num;
}

void PrintInvrtedPattern(int number)
{
	cout << "\n";

	for (int i = number; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}

		cout << "\n";

	}

}



int main()
{
	PrintInvrtedPattern(ReadPositiveNumber("enter number:"));

	return 0;
}