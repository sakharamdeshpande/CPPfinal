#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
	int thickness;
	public:
		Shape();
		virtual void display()=0;
		int get_thick();
		void set_thick();
	protected:
};

#endif
