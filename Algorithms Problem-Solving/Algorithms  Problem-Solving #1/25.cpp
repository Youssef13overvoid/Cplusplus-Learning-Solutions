

int ReadAge()
{
	int Age;
	cout << "Enter your Age :" << endl;
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
	int Age = 0;

	do
	{
		Age = ReadAge(); 

	} while (!ValidateNumberInRange(Age, From, To));

	return Age;
}

void PrintResult(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		
		cout << Age << " is a Valid Age :)" << endl;
	
	else

		cout << Age << " is inavalid Age :( " << endl;
}


int main()
{

	PrintResult(ReadUntilAgeBetween(18, 45));


	return 0;
} 