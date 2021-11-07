#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
using namespace std;

// sizes_rows[sizes][sizes_cols]
int solution(vector<vector<int>> s) { 
	// 2차원 vector -> vector<vector<int>> s
	int width = 0, height = 0; 
	
	// auto: 객체가 해당 블록이 끝날때 자동 파괴
	// 마지막 원소까지 복사본을 저장
	for (auto size : s) { 
		width = max(width, max(size[0], size[1])); 
		height = max(height, min(size[0], size[1])); 
	} 
	return width * height; 
} 

int main() { 
	vector<vector<int>> s = { 
		{60, 50}, 
		{30, 70}, 
		{60, 30}, 
		{80, 40} 
	}; 
	cout << "{60, 50}, {30, 70}, {60, 30}, {80, 40}  => ";
	cout << solution(s) << endl;
	return 0; 
}
