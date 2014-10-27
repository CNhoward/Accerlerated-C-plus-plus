#include <stdexcept>
#include "Vec.h"
#include "grade.h"
#include "median.h"
using namespace std;

double grade(double midterm,double fin,double homework)
{
	return 0.2*midterm+0.4*fin+0.4*homework;
}

double grade(double midterm,double fin,const Vec<double>& hw)
{
	return grade(midterm,fin,median(hw));
}
