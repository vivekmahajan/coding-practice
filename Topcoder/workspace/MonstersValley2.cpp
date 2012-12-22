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
#include <queue>
using namespace std;

struct node{
    int dragon;
    long long int dread_sum;
    int price_sum;

};
class MonstersValley2 {
public:
	int minimumPrice(vector <int>, vector <int>);
};

int MonstersValley2::minimumPrice(vector <int> dread, vector <int> price) {

    vector<struct node> results;

    queue< struct node> q;

    struct node start;
    start.dragon=0;
    start.price_sum = price[0];
    start.dread_sum = dread[0];
    q.push(start);
    while(!q.empty()){
        struct node current = q.front();
        q.pop();
        if(current.dragon == dread.size()-1){
            results.push_back(current);
        }else{
            struct node temp1;
            temp1.dragon = current.dragon + 1;
            temp1.dread_sum = current.dread_sum + dread[temp1.dragon];
            temp1.price_sum = current.price_sum + price[temp1.dragon];
            q.push(temp1);
            if(dread[temp1.dragon] < current.dread_sum){
                struct node temp2;
                temp2.dragon = current.dragon + 1;
                temp2.dread_sum = current.dread_sum;
                temp2.price_sum = current.price_sum;
                q.push(temp2);
            }
        }
    }
    int min = results[0].price_sum;
    for(int i=0; i<results.size(); i++){
        if(min > results[i].price_sum)
            min = results[i].price_sum;
    }
    return min;

}


double test0() {
	int t0[] = {8, 5, 10};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 1, 2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MonstersValley2 * obj = new MonstersValley2();
	clock_t start = clock();
	int my_answer = obj->minimumPrice(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {1, 2, 4, 1000000000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 1, 1, 2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MonstersValley2 * obj = new MonstersValley2();
	clock_t start = clock();
	int my_answer = obj->minimumPrice(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 5;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {200, 107, 105, 206, 307, 400};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 2, 1, 1, 1, 2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MonstersValley2 * obj = new MonstersValley2();
	clock_t start = clock();
	int my_answer = obj->minimumPrice(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {5216, 12512, 613, 1256, 66, 17202, 30000, 23512, 2125, 33333};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2, 2, 1, 1, 1, 1, 2, 1, 2, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MonstersValley2 * obj = new MonstersValley2();
	clock_t start = clock();
	int my_answer = obj->minimumPrice(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 5;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
