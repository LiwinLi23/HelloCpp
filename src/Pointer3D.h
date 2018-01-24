/*
 * Pointer3D.h
 *
 *  Created on: 2017年11月18日
 *      Author: litao
 */

#ifndef POINTER3D_H_
#define POINTER3D_H_

namespace liwin {

class Pointer3D {
public:
	Pointer3D(float x = 0.0, float y = 0.0, float z = 0.0)
		: mX(x), mY(y), mZ(z) {}

	float x() {return mX;}
	float y() {return mY;}
	float z() {return mZ;}

	void x(float newX) {mX = newX;}

private:
	float mX;
	float mY;
	float mZ;
};

} /* namespace liwin */

#endif /* POINTER3D_H_ */
