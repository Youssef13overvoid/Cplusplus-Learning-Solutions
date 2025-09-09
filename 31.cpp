int ReadN()
{
	int num;

	cout << "enter a number: " << endl;
	cin >> num;

	return num;
}

void PowerOf_1_2_4(int num)
{
	int a, b, c;
	a = num * num;
	b = num * num * num;
	c = num * num * num * num;
	cout << a << " " << b << " " << c << endl;
}
int main()
{
	PowerOf_1_2_4(ReadN());


	return 0;
}