
int RandomNumber(int From, int To)
{
	int random = rand() % (To - From + 1) + From;

	return random;
}


enum enOfCharType { SamallLetter = 1, CapitalLetter = 2,
	SpeceialCharacter = 3, Digit = 4 };

char GetRandomCharacter(enOfCharType CharType)
{
	switch (CharType)
	{
	case enOfCharType::SamallLetter:
		return char(RandomNumber(97, 122));

	case enOfCharType::CapitalLetter:
		return char(RandomNumber(65, 90));

	case enOfCharType::SpeceialCharacter:
		return char(RandomNumber(33, 47));

	case enOfCharType::Digit:
		return char(RandomNumber(48, 57));
	}
}

int main()
{
	srand((unsigned)time(NULL));

	cout << GetRandomCharacter(enOfCharType::SamallLetter) << endl;
	cout << GetRandomCharacter(enOfCharType::CapitalLetter) << endl;
	cout << GetRandomCharacter(enOfCharType::SpeceialCharacter) << endl;
	cout << GetRandomCharacter(enOfCharType::Digit) << endl;

	return 0;
}   