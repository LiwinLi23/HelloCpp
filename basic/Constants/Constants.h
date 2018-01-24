/*
 * Constants.h
 *
 *  Created on: 2017年4月29日
 *      Author: litao
 */

#ifndef BASIC_CONSTANTS_CONSTANTS_H_
#define BASIC_CONSTANTS_CONSTANTS_H_

// For a function to be usable in a constant expression, It must be defined
// constexpr
constexpr double LTSquare(double param) {
	return param * param;
}

static const int s_const1 = 2017;
static int s_var1 = 4;

static constexpr double s_max1 = 3.14 * LTSquare(s_const1);
// static constexpr double s_max2 = 3.14 * LTSquare(s_var1);

static constexpr double s_const2 =  3.14 * LTSquare(s_const1);
static constexpr double s_const3 =  LTSquare(s_const2);

void testConstantExpression() {
	cout << s_const2 << ", " << s_const3 << endl;
}

#endif /* BASIC_CONSTANTS_CONSTANTS_H_ */
