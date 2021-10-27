#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
using namespace std;

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(vector<vector<int>> s) { 
	int width = 0, height = 0; 
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
