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


int SumtDigits(int Num)
{
	int Remainder = 0;
	int Sum = 0;
	while (Num > 0)
	{
		Remainder = Num % 10;
		Num = Num / 10;

		Sum = Sum + Remainder;
	}

	return Sum;
}


int main()
{
	cout << "\nSum of Digits = "
		<< SumtDigits(ReadPositiveNumber("Enter a positive number ")) << endl;

	return 0;
}