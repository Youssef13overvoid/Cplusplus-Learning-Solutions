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


int ReverseNumber(int Num)
{
	int Remainder = 0, Number2 = 0;

	while (Num > 0)
	{
		Remainder = Num % 10;
		Num = Num / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}


int main()
{
	cout << "\nReverse is :\n "
		<< ReverseNumber(ReadPositiveNumber("Enter a positive number ")) << endl;
	  
	return 0;
}