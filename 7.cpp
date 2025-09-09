
int ReadNubmer()
{
	int num;
	cout << "enter a number?" << endl;
	cin >> num;

	return num;
}

float CalculateHalfeNumber(int num)
{
	return (float)num / 2;
} 

void PrintResult(int num)
{
	string Result = "the halfe " + to_string(num) + " is " + to_string(CalculateHalfeNumber(num));
	cout << endl << Result << endl;
}


int main()
{

	PrintResult(ReadNubmer());



	return 0;

}
