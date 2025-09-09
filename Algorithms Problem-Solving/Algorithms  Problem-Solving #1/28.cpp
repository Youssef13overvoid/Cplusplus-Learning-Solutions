
enum enOddOrEven {Odd = 1, Even = 2};

int ReadN()
{
	int N;
	cout << "Enter Number :" << endl;
	cin >> N;

	cout << "\n\n";

	return N;
}


enOddOrEven checkOddOrEven(int Number)
{
    if (Number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}


int SumOddNFrom1ToN_UsingWhile(int N)
{
	int i = 0;
	int sum = 0;

	cout << "Sum odd numbers using while statment:\n";
	
	while (i < N)
	{
		i++;
		if (checkOddOrEven(i) == enOddOrEven::Odd)
		{
			sum += i;
		}
	}
	return sum;
}

int SumOddNFrom1ToN_UsingDoWhile(int N)
{
	int i = 0;
	int sum = 0;

	cout << "\n\nSum odd numbers using do while statment:\n";

	
	do{
		i++;
		if (checkOddOrEven(i) == enOddOrEven::Odd)
		{
			sum += i;
		}
	} while (i < N);

	return sum;
}

int SumOddNFrom1ToN_For(int N)
{
	int sum = 0;

	cout << "\n\nSum odd numbers using For statment:\n";

	for (int i = 1; i < N; i++)
	{
		if (checkOddOrEven(i) == enOddOrEven::Odd)
		{
			sum += i;
		}
	}

	return sum;
}


int main()
{
	int N = ReadN();

    cout << SumOddNFrom1ToN_UsingWhile(N);
	cout << SumOddNFrom1ToN_UsingDoWhile(N);
	cout << SumOddNFrom1ToN_For(N);


	return 0;
} 