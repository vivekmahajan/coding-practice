#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class PenguinTiles {
public:
	int minMoves(vector <string>);
};

int PenguinTiles::minMoves(vector <string> tiles) {

    int rows = tiles.size();
    int columns = tiles[0].size();
    int dotr, dotc;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            if(tiles[i].substr(j, 1) == "."){
                dotr = i;
                dotc = j;
                break;
            }
        }

    }
    if(dotr == rows-1 && dotc == columns-1) return 0;
    if(dotr < rows-1 && dotc < columns -1)
        return 2;
    else
        return 1;
	
}


double test0() {
	string t0[] = {"PP",
 "P."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	PenguinTiles * obj = new PenguinTiles();
	clock_t start = clock();
	int my_answer = obj->minMoves(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"PPPPPPPP",
 ".PPPPPPP"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	PenguinTiles * obj = new PenguinTiles();
	clock_t start = clock();
	int my_answer = obj->minMoves(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"PPP",
 "P.P",
 "PPP"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	PenguinTiles * obj = new PenguinTiles();
	clock_t start = clock();
	int my_answer = obj->minMoves(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"P.",
 "PP",
 "PP",
 "PP"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	PenguinTiles * obj = new PenguinTiles();
	clock_t start = clock();
	int my_answer = obj->minMoves(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = {".PPP",
 "PPPP",
 "PPPP",
 "PPPP"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	PenguinTiles * obj = new PenguinTiles();
	clock_t start = clock();
	int my_answer = obj->minMoves(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}

int main() {
	int time;
	bool errors = false;
	
	time = test0();
	if (time < 0)
		errors = true;
	
	time = test1();
	if (time < 0)
		errors = true;
	
	time = test2();
	if (time < 0)
		errors = true;
	
	time = test3();
	if (time < 0)
		errors = true;
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
