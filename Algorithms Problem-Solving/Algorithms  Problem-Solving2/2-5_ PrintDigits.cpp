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


void PrintDigits(int Num)
{
	int Remainder = 0;

	while (Num > 0)
	{
		Remainder = Num % 10;
		Num = Num / 10;
		cout << Remainder << endl;
	}
}


int main()
{
	PrintDigits(ReadPositiveNumber("Enter a positive number "));

	return 0;
}