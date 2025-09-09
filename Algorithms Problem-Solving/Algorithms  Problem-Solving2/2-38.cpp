enum enPrimeNotPrime{Prime = 1, NotPrime = 2};

float ReadPositiveNumber(string Massege)
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

	for ( int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
			return enPrimeNotPrime::NotPrime;

	}
	return enPrimeNotPrime::Prime;
}

void PrintNumbeType(int Number)
{
	switch (CheckPrime(Number))
	{
	case enPrimeNotPrime::Prime:
		cout << "The Number is Prime\n";
		break;
	case enPrimeNotPrime::NotPrime:
		cout << "The Number is Not Prime\n";
		break;
	}


}

int main()
{
	PrintNumbeType(ReadPositiveNumber("Plase enter a positive number?"));


	return 0;
} 