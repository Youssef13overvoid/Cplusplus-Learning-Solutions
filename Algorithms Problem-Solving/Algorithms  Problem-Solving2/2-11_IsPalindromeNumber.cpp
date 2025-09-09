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
int ReverseNumber(int Num)
{
	int Remainder = 0, Number2 = 0;

	while (Num > 0)
	{
		Remainder = Num % 10;
		Num = Num / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}  

bool IsPalindromeNumber(int Number)
{
	return Number == ReverseNumber(Number);
}



int main()
{
	if (IsPalindromeNumber(ReadPositiveNumber("Enter a positive number?")))
		cout << "\nYes, it a is Palindrome Number.\n";
	else
		cout << "\nNo, it is NOT a Palindrome number.\n";

	return 0;
}