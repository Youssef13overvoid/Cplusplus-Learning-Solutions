
int ReadPositiveNumber(string Massage)
{
	int N;
	do
	{
		cout << Massage << endl;
		cin >> N;

	} while ( N < 0);

	return N;
}

int Factorial(int N)
{

	int Factorial = 1;

	for (int counter = N; counter >= 1; counter--)
	{
		Factorial = Factorial * counter;
	}

	return Factorial;
}

int main()
{

	cout << Factorial(ReadPositiveNumber("Enter Positive Number"));


	return 0;
} 