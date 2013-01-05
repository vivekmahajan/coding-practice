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

class KingSort {
public:
	vector <string> getSortedList(vector <string>);
};
bool myfunction(pair<string, int> i, pair<string, int> j){
    if(i.first < j.first)
        return true;
    else
        return false;

}
vector <string> KingSort::getSortedList(vector <string> kings) {
        vector< pair<string, int> > mod_kings;

        for(int i=0; i< kings.size(); i++){
            string temp = kings[i];
            string name, ordinal;
            int flag=0;
            for(int j=0; j<temp.size(); j++){
                if(temp.substr(j, 1) == " "){
                    flag=1;
                    continue;
                }
                if(flag){
                    ordinal += temp[j];
                }else{
                    name += temp[j];
                }
            }
            int first, second;
            string current;
            for(int j=0; j < ordinal.size(); j++){
                current += ordinal[j];
                if(current == "X"){
                    first = 1;
                }else if(current == "XX"){
                    first = 2;
                }else if(current == "XXX"){
                    first = 3;
                }else if(current == "XL"){
                    first = 4;
                }else if(current == "L"){
                    first = 5;
                }else if(current.size()==1){
                    first = 0;
                }
            }
            string ones;
            if(first == 1 || first == 5)
                ones = ordinal.substr(1, ordinal.size()-1);
            else if(first == 2 || first == 4)
                ones = ordinal.substr(2, ordinal.size()-2);
            else if(first == 3)
                ones = ordinal.substr(3, ordinal.size()-3);
            else if(first == 0)
                ones = ordinal;

            if(ones == "I"){
                second = 1;
            }else if(ones == "II"){
                second = 2;
            }else if(ones == "III"){
                second = 3;
            }else if(ones == "IV"){
                second = 4;
            }else if(ones == "V"){
                second = 5;
            }else if(ones == "VI"){
                second = 6;
            }else if(ones == "VII"){
                second = 7;
            }else if(ones == "VIII"){
                second = 8;
            }else if(ones == "IX"){
                second = 9;
            }else{
                second = 0;
            }
            int ord = first*10+second;
            stringstream out;
            out<<ord;
            string ord_str = out.str();
            if( first == 0)
                ord_str="0"+ord_str;
            string fullname = name+ord_str;
            mod_kings.push_back(make_pair(fullname, i));

        }
    sort(mod_kings.begin(), mod_kings.end(), myfunction);
    vector<string> result;
    for(int i=0; i<mod_kings.size(); i++){
        result.push_back(kings[mod_kings[i].second]);

    }
    return result;

}


double test0() {
	string t0[] = {"Louis IX", "Louis VIII"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	KingSort * obj = new KingSort();
	clock_t start = clock();
	vector <string> my_answer = obj->getSortedList(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"Louis VIII", "Louis IX" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"Louis IX", "Philippe II"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	KingSort * obj = new KingSort();
	clock_t start = clock();
	vector <string> my_answer = obj->getSortedList(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"Louis IX", "Philippe II" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"Richard III", "Richard I", "Richard II"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	KingSort * obj = new KingSort();
	clock_t start = clock();
	vector <string> my_answer = obj->getSortedList(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"Richard I", "Richard II", "Richard III" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"John X", "John I", "John L", "John V"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	KingSort * obj = new KingSort();
	clock_t start = clock();
	vector <string> my_answer = obj->getSortedList(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"John I", "John V", "John X", "John L" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = {"Philippe VI", "Jean II", "Charles V", "Charles VI", "Charles VII", "Louis XI"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	KingSort * obj = new KingSort();
	clock_t start = clock();
	vector <string> my_answer = obj->getSortedList(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"Charles V", "Charles VI", "Charles VII", "Jean II", "Louis XI", "Philippe VI" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	string t0[] = {"Philippe II", "Philip II"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	KingSort * obj = new KingSort();
	clock_t start = clock();
	vector <string> my_answer = obj->getSortedList(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"Philip II", "Philippe II" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
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
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
