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

void PrintInvrtedLetterPattern(int number)
{
	cout << "\n";

	for (int i = 65 + number - 1; i >= 65 ; i--)
	{

		for (int j = 1 ; j <= number - (65 + number - 1 -i); j++)
		{
			cout << char(i);
		}

		cout << "\n";

	}

}



int main()
{
	PrintInvrtedLetterPattern(ReadPositiveNumber("enter number:"));

	return 0;
}