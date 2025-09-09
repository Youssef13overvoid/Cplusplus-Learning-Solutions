void ReadNumbers(float& A, float& D)
{
	cout << "Enter rectangle side A: " << endl;
	cin >> A;

	cout << "Enter recangle diagonal D: " << endl;
	cin >> D;
}

float RectangelAreaBySideAndDiagonal(float A, float D)
{
	float Area = A * sqrt(pow(D, 2) - pow(A, 2));

	return Area;

}

void PrintArea(float Area)
{
	cout << "\nRectangel Area = " << Area << endl;
}


int main()
{
	float A, D;
	ReadNumbers(A, D);
	PrintArea(RectangelAreaBySideAndDiagonal(A, D));



	return 0;
}
