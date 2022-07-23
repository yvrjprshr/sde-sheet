// Disjoin Set Union

// differernt connected components [every component is called set and all components together disjoin set cuz there is no common node]

// Functions

/*
1) make_Set -> add new node
2) find_set -> find parent
3) union_sets -> group a,b
*/

#include <iostream>
using namespace std;
const int N = 1e5+2;

int parent[N];
int set_size[N];

void make_set(int v){
	parent[v] = v;
	set_size[v] = 1;
}

// At each iteration, set parent of all nodes in path directly to parent
int find_set(int v){
	if(parent[v] == v) return v;
	return parent[v] = find_set(parent[v]);
}

// union by size
void union_sets(int a, int b){
	a = find_set(a);
	b = find_set(b);

	if(a != b){
		if(set_size[a] < set_size[b]){
			swap(a,b);
		}
		parent[b] = a;
		set_size[a] += set_size[b];
	}
}

int main() {
	int n,k;
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		make_set(i);
	}
	for(int i = 1; i <= k; i++){
		int u,v;
		cin >> u >> v;
		union_sets(u, v);
	}

	int connected_cnt = 0;
	for(int i = 1; i <= n; i++){
		if(parent[i] == i)connected_cnt++;
	}
	cout << connected_cnt << endl;
}
