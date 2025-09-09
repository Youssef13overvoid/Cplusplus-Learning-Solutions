int RandomNumber(int From, int To)
{ 
	int random = rand() % (To - From + 1) + From;

	return random;
}

int main()
{
	srand((unsigned)time(NULL));

	cout << rand();

	cout << RandomNumber(10, 20) << endl;
	cout << RandomNumber(10, 20) << endl;
	cout << RandomNumber(10, 20) << endl;

	return 0;
}