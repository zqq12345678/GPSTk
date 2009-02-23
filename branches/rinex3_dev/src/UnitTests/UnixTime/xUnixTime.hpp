#ifndef XUNIXTIME_HPP
#define XUNIXTIME_HPP

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "UnixTime.hpp"

using namespace std;

class xUnixTime: public CPPUNIT_NS :: TestFixture
{
	CPPUNIT_TEST_SUITE (xUnixTime);
	CPPUNIT_TEST (setFromInfoTest);
	CPPUNIT_TEST (operatorTest);
        CPPUNIT_TEST (resetTest);
	CPPUNIT_TEST (timeSystemTest);
	CPPUNIT_TEST (printfTest);
	CPPUNIT_TEST_SUITE_END ();

	public:
		void setUp (void);

	protected:
		void operatorTest (void);
		void setFromInfoTest (void);
		void resetTest (void);
		void timeSystemTest (void);
		void printfTest (void);
	private:

};

#endif