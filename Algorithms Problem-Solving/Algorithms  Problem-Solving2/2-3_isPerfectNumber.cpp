
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

void PrintResult(int num)
{
	if (isPerfectNumber(num))
		cout << num << " is perfect.\n";
	else
		cout << num << " is not perfect.\n";
}


int main()
{
	PrintResult(ReadPositiveNumber("enter number:"));


	return 0; 
}