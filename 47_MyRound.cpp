float GetFractionPart(float Number)
{
	return Number - int(Number);
}

float MyRound(float Number)
{
	int IntPart;
	IntPart = int(Number);

	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart) >= .5)
	{
		if (Number > 0)
			return ++IntPart;
		else
			return --IntPart;
	}
	else
	{
		return IntPart;
	}

}

float ReadNumber()
{
	float Number;
	cout << "Enter number:" << endl;
	cin >> Number;

	return Number;
}

int main()
{
	float Number = ReadNumber();

	cout << "My MyFloor Result : " << MyRound(Number) << endl;
	cout << "C++ floor Result: " << round(Number) << endl;

	return 0;
}