void ReadAB(float& A, float& B)
{
	cout << "Enter a: " << endl;
	cin >> A;

	cout << "Enter b: " << endl;
	cin >> B;
}

float CalculateRectangelArea(float A, float B)
{        
	return A * B;

}

void PrintArea(float Area)
{
	cout << "\nRectangel Area = " << Area << endl;
}


int main()
{
	float A, B;
	ReadAB(A, B);
	PrintArea(CalculateRectangelArea(A, B));



	return 0;
}