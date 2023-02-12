#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int size = board.size();
    
    vector<vector<int>> dolls(size, vector<int>(size, 0));
    vector<pair<int, int>> idx(size, {0, 0});
    vector<int> basket;
    
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {
            if(board[i][j] != 0) {
                dolls[j][idx[j].first] = board[i][j];
                idx[j].first++;
            }
        }
    }
    
    for(int i=0;i<moves.size();i++) {
        if((dolls[moves[i]-1][idx[moves[i]-1].second] != 0) && (idx[moves[i]-1].first != idx[moves[i]-1].second)) {        
            basket.push_back(dolls[moves[i]-1][idx[moves[i]-1].second]);
            idx[moves[i]-1].second++;
        }

        if(basket[basket.size()-1] == basket[basket.size()-2]) {
            answer++;
            basket.pop_back();
            basket.pop_back();
        }
    }
    
    return answer*2;
}