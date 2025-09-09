
float ReadDiameter()
{
	float D;

	cout << "Enter radious D: " << endl;
	cin >> D;

	return D;
}

float CircleAreaByDimter(float D)
{
	const float PI = 3.1415926535897933238;

	float Area = (PI * pow(D, 2)) / 4;
	return Area;

}

void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}


int main()
{
	PrintResult(CircleAreaByDimter(ReadDiameter()));


	return 0;
}