/*File .h la file mo ta bao gom lop gi, co thuoc tinh doi tuong gi*/
#ifndef _FIGURE_H //ko dc dinh nghia lai trong toan project
#define _FIGURE_H

class Point2D
{
	double X, Y; // dac tinh
	public:
		void Set(double Xo, double Yo);//phuong thuc
		void Move(double dX, double dY);
		void Scale(double sX, double sY);
	
};//end declaration of the Point2D class

class Circle
{
	Point2D Center;
	double Radius;
	public:
		void Set(double Xo, double Yo, double r);
		void Move (double dX, double dY);
		double Area();
		double Perimeter();
}; //end declaration of the Circle class

#endif
