#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()

struct state{
	int x,y, moves;
	bool rook_cap, queen_cap;
    bool flag[8][8];


};

class CaptureThemAll {
	public:
	bool is_valid(int x, int y, struct state st){
		if(x<8 && y<8 && x>=0 && y>=0 && st.flag[x][y] == false)
			return true;
		else
			return false;

	}
	vector<struct state> get_states(struct state cur){
		vector<struct state> states;
		struct state temp;
		if(is_valid(cur.x+2, cur.y+1, cur)){
			temp.x = cur.x+2;
			temp.y = cur.y+1;
			states.push_back(temp);
		}
		if(is_valid(cur.x+2, cur.y-1, cur)){
			temp.x = cur.x+2;
			temp.y = cur.y-1;
			states.push_back(temp);
		}
		if(is_valid(cur.x-2, cur.y+1, cur)){
			temp.x = cur.x-2;
			temp.y = cur.y+1;
			states.push_back(temp);
		}
		if(is_valid(cur.x-2, cur.y-1, cur)){
			temp.x = cur.x-2;
			temp.y = cur.y-1;
			states.push_back(temp);
		}
		if(is_valid(cur.x+1, cur.y+2, cur)){
			temp.x = cur.x+1;
			temp.y = cur.y+2;
			states.push_back(temp);
		}
		if(is_valid(cur.x-1, cur.y+2, cur)){
			temp.x = cur.x-1;
			temp.y = cur.y+2;
			states.push_back(temp);
		}
		if(is_valid(cur.x+1, cur.y-2, cur)){
			temp.x = cur.x+1;
			temp.y = cur.y-2;
			states.push_back(temp);
		}
		if(is_valid(cur.x-1, cur.y-2, cur)){
			temp.x = cur.x-1;
			temp.y = cur.y-2;
			states.push_back(temp);
		}

		return states;
	}
	int fastKnight(string knight, string rook, string queen) {

		struct state rook_state, queen_state, knight_state;
		knight_state.x = (int)(knight[0]-'a');
		knight_state.y =  atoi(&knight[1])-1;
		knight_state.queen_cap = false;
		knight_state.rook_cap = false;
		knight_state.moves = 0;
		queen_state.x = (int)(queen[0]-'a');
		queen_state.y = atoi(&queen[1])-1;
		rook_state.x = (int) (rook[0]- 'a');
		rook_state.y = atoi(&rook[1])-1;
		/*cout<<knight<<" "<<knight_state.x<<" "<<knight_state.y<<endl;
		cout<<rook<<" "<<rook_state.x <<" "<<rook_state.y<<endl;
		cout<<queen<<" "<<queen_state.x<<" "<<queen_state.y<<endl;
		*/
		for(int i=0; i<8; i++){
			for(int j=0; j<8; j++){
				knight_state.flag[i][j]=false;
			}
		}
		queue< struct state > q;
		q.push(knight_state);

		while(!q.empty()){
			struct state cur = q.front();
			//cout<< cur.x <<" "<< cur.y<<endl;
			q.pop();
			if( cur.queen_cap == true && cur.rook_cap == true)
				return cur.moves;

			vector<struct state> states = get_states(cur);


			for(int i=0; i<states.size(); i++){
				struct state temp = cur;
				temp.moves = cur.moves+1;
				temp.x = states[i].x;
				temp.y = states[i].y;
				temp.flag[cur.x][cur.y] = true;
				if(states[i].x == queen_state.x && states[i].y == queen_state.y)
					temp.queen_cap = true;
				else
					temp.queen_cap = cur.queen_cap;
				if(states[i].x == rook_state.x && states[i].y == rook_state.y)
					temp.rook_cap = true;
				else
					temp.rook_cap = cur.rook_cap;
				if(temp.rook_cap && temp.queen_cap)
					return temp.moves;
				q.push(temp);
			}

		}

		return (-1);
	}


};
