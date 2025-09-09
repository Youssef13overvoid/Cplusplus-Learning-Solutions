

void ReadTriangleData(float &a, float &b)
{

	cout << "Enter Trinangle side a ? " << endl;	
	cin >> a;

	cout << "Enter Trinangle side b ? " << endl;
	cin >> b;
}

float CircleAreaByITrinangle(float a, float b)
{
	const float PI = 3.1415926535897933238;

	float Area = (PI * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

	return Area;

}

void PrintResult(float Area) 
{
	cout << "\nCircle Area = " << Area << endl;
}


int main()
{
	float a, b;

	ReadTriangleData(a, b);

	PrintResult(CircleAreaByITrinangle(a, b));


	return 0;
} 