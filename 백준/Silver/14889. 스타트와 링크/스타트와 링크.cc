//14889 스타트와 링크
#include <iostream>
#include <vector>
using namespace std;

int n;
int S[21][21];
int min_ability = 2147483647;
bool visited[21];

int get_min(int x, int y) {
    if(x > y) {
        return y;
    }
    else {
        return x;
    }
}

int ability_check() {
    vector<int> start, link;

    for(int i=0;i<n;i++) {
        if(visited[i] == true) {
            start.push_back(i);
        }
        else {
            link.push_back(i);
        }
    }

    int start_ability = 0, link_ability = 0;

    for(int i=0;i<n/2;i++) {
        for(int j=0;j<n/2;j++) {
            if(i == j) {
                continue;
            }
            else {
                start_ability += S[start[i]][start[j]];
                link_ability += S[link[i]][link[j]];
            }
        }
    }

    return abs(start_ability - link_ability);
}

void teaming(int cnt, int idx) {
    if(cnt == n/2) {
        min_ability = get_min(min_ability, ability_check());
        return;
    }
    else {
        for(int i=idx;i<n;i++) {
            visited[i] = true;

            teaming(cnt+1, i+1);

            visited[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>S[i][j];
        }
    }

    teaming(0, 0);

    cout<<min_ability<<"\n";

    return 0;
}