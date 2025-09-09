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

void PrintLetterPattern(int number)
{
	cout << "\n";

	for (int  i = 65; i <= 65 + number - 1; i++)
	{
		for (int j = 1; j <= i - 65 + 1; j++)
		{
			cout << char(i);
		}
		cout << "\n";
	}

}



int main()
{
	PrintLetterPattern(ReadPositiveNumber("enter number:"));

	return 0;
}