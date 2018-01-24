/*
 * LTVector.h
 *
 *  Created on: 2017年5月14日
 *      Author: litao
 */

#ifndef CLASS_LTVECTOR_H_
#define CLASS_LTVECTOR_H_

class LTVector {
public:
	LTVector(int size)
		: mElements{new double[size]}, mSize{size} {}
	double& operator[](int i){ return mElements[i]; }
	int size() { return mSize; }

private:
	double* mElements;
	int		mSize;
};

#endif /* CLASS_LTVECTOR_H_ */
