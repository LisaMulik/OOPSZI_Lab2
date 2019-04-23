#include <stdio.h> 
#include <math.h> 

using namespace std;

double func(double x);
bool isInArea(double x, double y);

int main(void)
{
	double x, y;
	int n;
	printf("Choose task 1 or task 2:\n");
	cin >> n;
	switch (n)
	{
		case 1:
		{
			printf("Task1:\n");
			printf("Enter Х=");
			cin >> x;
			printf("Enter Y=");
			cin >> y;
			isInArea(x, y);
			printf("%d", isInArea(x, y));
			break;
		}
				case 2:
		{
			printf("Task 2:\n");
			printf("Enter Х=");
			cin >> x;
			func(x);
			printf("%.3lf", func(x));
			break;
		}
		default:
			printf("Wrong input");
		break;
	}
	return(0);
}

bool isInArea(double x, double y)
{
	double c;
	c = x * x;
	if ((x >= 0 && x <= 1) && (y >= 0 && y <= 1))
			return(1);
	else if ((y >= -1 && y <= 0) && (y <= sqrt(1 - c)))
			return(1);
	else
		return (0);
}


double func(double x)
{
	double f;
	if (x<= 3)
		return pow(x, 2) - 3 * x + 9;
	else
		return  1 / (pow(x, 3) + 6);
}