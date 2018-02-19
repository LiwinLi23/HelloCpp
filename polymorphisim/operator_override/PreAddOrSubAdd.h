#include <iostream>

using namespace std;

class Clock {
public:
    Clock(int h = 0, int m = 0, int s = 0);
    Clock& operator++();        // Prefix add
    Clock  operator++(int);     // Subfix add
    void showTime() const;
    static void test() {
        Clock c1; c1.showTime();
        ++c1; c1.showTime();
        c1++; c1.showTime();
    }

private:
    int mHour, mMimute, mSecond;
};

Clock::Clock(int h, int m, int s) {
    // todo: check the paramters
    mHour = h; mMimute = m; mSecond = s;
}

Clock& Clock::operator++() {
    ++mSecond;
    if (mSecond >= 60) {
        mSecond -= 60;
        ++mMimute;
        if (mMimute >= 60) {
            mMimute -= 60;
            mHour = (mHour + 1) % 24;
        }
    }

    return *this;
}

Clock Clock::operator++(int) {
    Clock old = *this;
    ++(*this);
    return old;
}

void Clock::showTime() const {
    cout << mHour << " : " << mMimute << " : " << mSecond << endl;
}












