int ReadN()
{
	int N;
	cout << "Enter N :" << endl;
	cin >> N;

	cout << "\n\n";

	return N;
}

void PrintRangeFromNto1_UsingWhile(int N)
{
	int i = N;

	cout << "Range using while statement:\n";
	
	while ( i >= 1)
	{
		cout << i << endl;
		i--;
	}

	cout << "\n\n";
}

void PrintRangeFromNto1_UsDoWhile(int N)
{
	int i = N;

	cout << "Range using do while statement:\n";

	do
	{
		cout << i << endl;
		i--;
	} while (i >= 1);

	cout << "\n\n";
}

void PrintRangeFromNto1_UsingFor(int N)
{
	cout << "Range using For statement:\n";

	for (int i = N; i >= 1 ; i--)
	{
		cout << i << endl;
	}

	cout << "\n\n";
}

int main()
{
	int N = ReadN();

	PrintRangeFromNto1_UsingWhile(N);
	PrintRangeFromNto1_UsDoWhile(N);
	PrintRangeFromNto1_UsingFor(N);


	return 0;
} 