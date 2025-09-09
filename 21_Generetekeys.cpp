enum enOfCharType {
	SamallLetter = 1, CapitalLetter = 2,
	SpeceialCharacter = 3, Digit = 4
};


int RandomNumber(int From, int To)
{
	int random = rand() % (To - From + 1) + From;

	return random;
}

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


string GenerateWord(enOfCharType CharType, short Lenght)
{
	string Word = "";

	for (int i = 1; i <= Lenght; i++)
	{
		Word = Word + GetRandomCharacter(CharType);

	}
	return Word;
}

string Generatekey()
{
	string key = "";

	key = GenerateWord(enOfCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enOfCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enOfCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enOfCharType::CapitalLetter, 4);

	return key;

}

void Generetekeys(short numberkeys)
{
	for (int i = 1; i <= numberkeys; i++)
	{
		cout << "[" << i << "] : ";
		cout << Generatekey() << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));

	Generetekeys(ReadPositiveNumber("Enter how many kyes to generate? \n"));



	return 0;
}