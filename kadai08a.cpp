#include<iostream>
#include<vector>
void input_vector(std::vector<int>& r){
	int a;
	std::cin>> a;
	while(a >= 0){
		r.push_back(a);
		std::cin>> a;
	}
}

int find_max_idx(const std::vector<int>& r, int i, int end_heap){
	int max = r[i], flag = i;
	if(end_heap >= 2*i+1 && max < r[2*i+1]) {flag = 2*i+1; max = r[2*i+1];}
	if(end_heap >= 2*i+2 && max < r[2*i+2]) {flag = 2*i+2; max = r[2*i+2];}
	return flag;
}

int main(){
	std::vector<int> a = {};
	input_vector(a);
	int i, end_heap;
	std::cin >> i >> end_heap;
	int max_idx = find_max_idx(a, i, end_heap);
	std::cout << a[max_idx] << "\n" << max_idx;
}
