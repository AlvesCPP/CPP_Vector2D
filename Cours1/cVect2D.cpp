#include "cVect2D.h"


cVect2D::cVect2D()
{
	mFlt_x = 0.0;
	mFlt_y = 0.0;
}


cVect2D::cVect2D(cVect2D* ptrVect)
{
	if (ptrVect != NULL)
	{
		mFlt_x = ptrVect->mFlt_x;
		mFlt_y = ptrVect->mFlt_y;
	}
}

cVect2D::cVect2D(float x, float y)
{
	mFlt_x = x;
	mFlt_y = y;
}

float cVect2D::GetX() const
{
	return mFlt_x;
}

float cVect2D::GetY() const
{
	return mFlt_y;
}

void cVect2D::SetXY(float x, float y)
{
	mFlt_x = x;
	mFlt_y = y;
}

void cVect2D::SetX(float x)
{
	mFlt_x = x;
}

void cVect2D::SetY(float y)
{
	mFlt_y = y;
}

void cVect2D::Add(cVect2D term)
{
	mFlt_x += term.mFlt_x;
	mFlt_y += term.mFlt_y;
}

void cVect2D::Sub(cVect2D operand) 
{
	mFlt_x -= operand.mFlt_x;
	mFlt_y -= operand.mFlt_y;
}

void cVect2D::Mult(cVect2D factor)
{
	mFlt_x *= factor.mFlt_x;
	mFlt_y *= factor.mFlt_y;
}

void cVect2D::Mult(float factor)
{
	mFlt_x *= factor;
	mFlt_y *= factor;
}

float cVect2D::ScalarProduct(cVect2D factor)const
{
	return ((mFlt_x * factor.mFlt_x) + (mFlt_y * factor.mFlt_y));
}

ENUM_Angle cVect2D::AngleType(cVect2D other)const
{
	if (this->ScalarProduct(other) > 0.0)
		return Acute;
	if (this->ScalarProduct(other) < 0.0)
		return Obtuse;
	else
		return Right;
}

float cVect2D::NormProduct(cVect2D other)const
{
	return(sqrt( pow(other.mFlt_x - mFlt_x, 2) + pow(other.mFlt_y - mFlt_y, 2) ));
}

std::string cVect2D::ToString()const
{
	return ("x = " + std::to_string(mFlt_x) + " y = " + std::to_string(mFlt_y));
}

