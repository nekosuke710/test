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
void print_vector(const std::vector<int>& r){
	int n = r.size();
	for(int i = 0; i < n; i++){
		std::cout << r[i] <<" ";
	}
	std::cout <<"\n";
}
void swap(int& x, int& y){
	int tmp = x;
	x = y;
	y = tmp;
}
int find_max_idx(const std::vector<int>& r, int i, int end_heap){
	int max = r[i], flag = i;
	if(end_heap >= 2*i+1 && max < r[2*i+1]) {flag = 2*i+1; max = r[2*i+1];}
	if(end_heap >= 2*i+2 && max < r[2*i+2]) {flag = 2*i+2; max = r[2*i+2];}
	return flag;
}
void heapify(std::vector<int>& r, int i, int end_heap){
	int max_idx;
	while(true){
		max_idx = find_max_idx(r, i, end_heap);
		if(max_idx != i){
			swap(r[i], r[max_idx]);
			i = max_idx;
		} else break;
	}
}
void build_heap(std::vctor<int>& r){
	
}

int main(){
	std::vecto<int>(a) = {};
	input_vector(a);
	build_heap(a);
	print_vectr(a);
}
