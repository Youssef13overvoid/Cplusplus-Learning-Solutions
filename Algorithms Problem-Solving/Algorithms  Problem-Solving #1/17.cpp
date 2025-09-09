
void ReadNumbers(float& a, float& h)
{
	cout << "Enter A: " << endl;
	cin >> a;

	cout << "Enter H: " << endl;
	cin >> h;
}

float TriangleArea(float a, float h)
{
	float Area = a / 2 * h;

	return Area;

}

void PrintArea(float Area)
{
	cout << "\nRectangel Area = " << Area << endl;
}


int main()
{
	float a, h;
	ReadNumbers(a, h);
	PrintArea(RectangelAreaBySideAndDiagonal(a, h));



	return 0;
}