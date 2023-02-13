#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int size = board.size();
    
    vector<int> idx(size, size);
    vector<int> basket;
    
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {
            if(board[i][j] != 0) {
                idx[j]--;
            }
        }
    }

    for(int i=0;i<moves.size();i++) {
        if(idx[moves[i]-1] != size) {
            basket.push_back(board[idx[moves[i]-1]][moves[i]-1]);
            board[idx[moves[i]-1]][moves[i]-1] = 0;
            idx[moves[i]-1]++;
        }
        if(basket[basket.size()-1] == basket[basket.size()-2]) {
            answer += 2;
            basket.pop_back();
            basket.pop_back();
        }
    }
    
    return answer;
}
