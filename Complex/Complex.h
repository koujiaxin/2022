#ifndef __COMPLEX__
#define __COMPLEX__

class complex
{
public:
	complex(double r = 0, double i = 0): re (r), im (i) {}

	complex& operator += (const complex& r);
	double real() const { return re; }
	double imag() const { return im; }

private:
	double re, im;

	friend complex& __doapl (complex*, const complex&);
}; 
#endif __COMPLEX___