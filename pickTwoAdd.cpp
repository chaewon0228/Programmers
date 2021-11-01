#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <iterator>
using namespace std;

vector<int> solution(vector<int> num) {
	vector<int> answer;
	set<int> n;

	for (int i = 0; i < num.size() -1; i++) {
		for (int j = i + 1; j < num.size(); j++) {
			//insert로 자동 정렬
			n.insert(num[i] + num[j]);
		}
	}
	//answer 배열에 할당
	answer.assign(n.begin(), n.end());
	return answer;
}

int main() {
	vector<int> arr = { 2, 1, 3, 4, 1 };
	vector<int> answer;
	answer = solution(arr);

	for (auto &i: answer) {
		cout << i << " ";
	}
	return EXIT_SUCCESS;
}