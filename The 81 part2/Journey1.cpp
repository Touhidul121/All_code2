#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100001;

int N;
double answer = 0.0;
vector<int> adjacency[MAXN];

void dfs (int at, int parent, double probability, int depth) {
    // count how many nodes are below the current node
    int children = 0;
    for (int i: adjacency[at]) {
        if (i != parent) {
            children++;
        }
    }
    /// split the probability of the current node with all the nodes below
    for (int i: adjacency[at]) {
        if (i != parent) {
            dfs (i, at, probability/children, depth+1);
        }
    }
    /// check if the current node is a leaf node
    if (children == 0) {

        answer += probability*depth;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cin >> N;
    for (int i=0; i<N-1; i++) {
        /// N-1 because there are only N-1 edges
        int a, b;
        cin >> a >> b;
        /// 0-based indexing
        //a--;
        //b--;
        adjacency[a].push_back(b);
        adjacency[b].push_back(a);
    }

    dfs(1, 0, 1.0, 0);
    cout << fixed << setprecision(20) << answer <<endl;
}
