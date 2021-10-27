#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
using namespace std;

// sizes_rows�� 2���� �迭 sizes�� �� ����, sizes_cols�� 2���� �迭 sizes�� �� �����Դϴ�.
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
