

float ReadSquareSide()
{
	float A;

	cout << "Enter square side A: " << endl;
	cin >> A;

	return A;
}

float CircleAreaInscribedInSquare(float A)
{
	const float PI = 3.1415926535897933238;

	float Area = (PI * pow(A, 2)) / 4;

	return Area;

}

void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}


int main()
{

	PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));

	return 0;
} 