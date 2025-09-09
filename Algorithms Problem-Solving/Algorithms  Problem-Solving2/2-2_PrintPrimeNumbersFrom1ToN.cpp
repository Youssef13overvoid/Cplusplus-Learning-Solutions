enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };


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


enPrimeNotPrime CheckPrime(int Number)
{  
	int M = round(Number / 2);

	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
			return enPrimeNotPrime::NotPrime;

	}
	return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int num)
{
	cout << "\nPrime Numbers From " << 1 << " To " << num;
	cout << "Are :" << endl;

	for (int i = 1; i <= num ; i++)
	{
		if ( CheckPrime(i) == enPrimeNotPrime::Prime )
		{
			cout << i << "\n";
		}

	}
}


int main()
{

	PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Enter a positive number:"));


	return 0; 
}