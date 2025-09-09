

void PrintLettersFromAtoZ()
{

	for (char Alpha = 65; Alpha <= 90; Alpha++)
	{
		cout << " " << Alpha;
	}

	cout << endl;

	for (char alpha = 97; alpha <= 122; alpha++)
	{
		cout << " " << alpha;
	}
}

int main()
{
	PrintLettersFromAtoZ();
}