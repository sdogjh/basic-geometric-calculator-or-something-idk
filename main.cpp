#include <iostream>
using namespace std;

int main(){
	int code;
	float side, base, length, width, height, area, radius;
while(true){

cout << "Press 1 for Circle\n";
cout << "Press 2 for Rectangle\n";
cout << "Press 3 for Triangle\n";
cout << "Press 4 for Square\n";
cout << "\n";
cout <<"Enter a number selected from above:\n";
cin >> code;
switch(code){
	case 1:
	cout <<"Enter the radius\n";
	cin >> radius;
	area = 3.14 * radius * radius;
cout << "The area of the circle is =\n" << area << endl;
break;

case 2:
cout <<"Enter the width of the rectangle:\n ";
cin >> width;
cout <<"Enter the width of the rectangle:\n ";
cin >> length;
area = width*length;
cout << "The Area of the reactangle is:\n " << area << endl;
break;

case 3:
cout << "Enter the base of the triangle:\n";
cin >> base;
cout << "Enter the base of the triangle:\n";
cin >> height;
area = 0.5*base*height;
cout <<"The area of the triangle is:\n" << area << endl;
break;

case 4:
cout << "Enter the sides of the square:\n";
cin >> side;
area = side*side;
cout <<"The area of the triangle is:\n" << area << endl;
break;

default:
cout <<"INVALID INPUT CODE, 404 NOT FOUND";
break;

}
}

return 0;
	}

