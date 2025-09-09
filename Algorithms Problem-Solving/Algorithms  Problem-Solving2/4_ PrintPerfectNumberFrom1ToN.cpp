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


int isPerfectNumber(int Number)
{
	int sum = 0;

	for (int counter = 1; counter < Number; counter++)
	{
		if (Number % counter == 0)
		{
			sum = sum + counter;
		}
	}

	return Number == sum;
}

void PrintPerfectNumberFrom1ToN(int Num)
{
	for (int i = 1; i < Num; i++)
	{
		if (isPerfectNumber(i))
		{
			cout << i << "\n";
		}
	}
}


int main()
{
	PrintPerfectNumberFrom1ToN(ReadPositiveNumber("enter a positive number:"));


	return 0;
}