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


int SumEvenNFrom1ToN_UsingWhile(int N)
{
	int i = 0;
	int sum = 0;

	cout << "Sum even numbers using while statment:\n";
	
	while (i < N)
	{
		i++;
		if (checkOddOrEven(i) == enOddOrEven::Even)
		{
			sum += i;
		}
	}
	return sum;
}

int SumEvenNFrom1ToN_UsingDoWhile(int N)
{
	int i = 0;
	int sum = 0;

	cout << "\n\nSum even numbers using do while statment:\n";

	
	do{
		i++;
		if (checkOddOrEven(i) == enOddOrEven::Even)
		{
			sum += i;
		}
	} while (i < N);

	return sum;
}

int SumEvenNFrom1ToN_For(int N)
{
	int sum = 0;

	cout << "\n\nSum even numbers using For statment:\n";

	for (int i = 1; i <= N; i++)
	{
		if (checkOddOrEven(i) == enOddOrEven::Even)
		{
			sum += i;
		}
	}

	return sum;
}


int main()
{
	int N = ReadN();

    cout << SumEvenNFrom1ToN_UsingWhile(N);
	cout << SumEvenNFrom1ToN_UsingDoWhile(N);
	cout << SumEvenNFrom1ToN_For(N);


	return 0;
} 