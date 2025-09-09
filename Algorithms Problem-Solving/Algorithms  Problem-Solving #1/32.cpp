int ReadN()
{
	int num;

	cout << "enter a number: " << endl;
	cin >> num;

	return num;
}

int ReadPowr()
{
	int M;

	cout << "enter a power: " << endl;
	cin >> M;

	return M;
}

int PowerOfM(int number, int M)
{
    if (M == 0)
    {
        return 1;
    }

    int p = 1;

    for (int i = 1; i <= M; i++)
    {
        p = p * number;
    }

    return p;

}



int main()
{
    int N = ReadN();
    int M = ReadPowr();

    cout << "Result = " << PowerOfM(N, M);
   
    //cout << endl << "Result = " << PowerOfM(ReadN(), ReadPowr());


	return 0;
} 