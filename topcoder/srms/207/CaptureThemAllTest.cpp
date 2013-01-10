#include "CaptureThemAll.h"
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

class CaptureThemAllTest {

    static void assertEquals(int testCase, const int& expected, const int& actual) {
        if (expected == actual) {
            cout << "Test case " << testCase << " PASSED!" << endl;
        } else {
            cout << "Test case " << testCase << " FAILED! Expected: <" << expected << "> but was: <" << actual << '>' << endl;
        }
    }

    CaptureThemAll solution;

    void testCase0() {
		string knight = "a1";
		string rook = "b3";
		string queen = "c5";
		int expected_ = 2;
        assertEquals(0, expected_, solution.fastKnight(knight, rook, queen));
    }

    void testCase1() {
		string knight = "b1";
		string rook = "c3";
		string queen = "a3";
		int expected_ = 3;
        assertEquals(1, expected_, solution.fastKnight(knight, rook, queen));
    }

    void testCase2() {
		string knight = "a1";
		string rook = "a2";
		string queen = "b2";
		int expected_ = 6;
        assertEquals(2, expected_, solution.fastKnight(knight, rook, queen));
    }

    void testCase3() {
		string knight = "a5";
		string rook = "b7";
		string queen = "e4";
		int expected_ = 3;
        assertEquals(3, expected_, solution.fastKnight(knight, rook, queen));
    }

    void testCase4() {
		string knight = "a1";
		string rook = "h1";
		string queen = "a8";
		int expected_ = 11;
        assertEquals(4, expected_, solution.fastKnight(knight, rook, queen));
    }

    public: void runTest(int testCase) {
        switch (testCase) {
            case (0): testCase0(); break;
            case (1): testCase1(); break;
            case (2): testCase2(); break;
            case (3): testCase3(); break;
            case (4): testCase4(); break;
            default: cerr << "No such test case: " << testCase << endl; break;
        }
    }

};

int main() {
    cout<< "hello "<<endl;

    for (int z= 0; z < 5; z++) {
        CaptureThemAllTest test;
        test.runTest(z);
    }
    exit(1);
}
