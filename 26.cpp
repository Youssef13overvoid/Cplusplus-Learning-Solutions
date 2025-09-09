int ReadN()
{
	int N;
	cout << "Enter N :" << endl;
	cin >> N;

	cout << "\n\n";

	return N;
}

void PrintRangeFrom1ToN_UsingWhile(int N)
{
	int i = 1;

	cout << "Rane using while statement:\n";
	
	while ( i <= N)
	{
		cout << i << endl;
		i++;
	}

	cout << "\n\n";
}

void PrintRangeFrom1ToN_UsDoWhile(int N)
{
	int i = 1;

	cout << "Rane using do while statement:\n";

	do
	{
		cout << i << endl;
		i++;
	} while (i <= N);

	cout << "\n\n";
}

void PrintRangeFrom1ToN_UsingFor(int N)
{
	cout << "Rane using For statement:\n";

	for (int i = 1; i <= N ; i++)
	{
		cout << i << endl;
	}

	cout << "\n\n";
}

int main()
{
	int N = ReadN();

	PrintRangeFrom1ToN_UsingWhile(N);
	PrintRangeFrom1ToN_UsDoWhile(N);
	PrintRangeFrom1ToN_UsingFor(N);


	return 0;
} 