#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int T;//테스트 케이스 개수
	int x1, y1, x2, y2; //출발점, 도착점.
	int n; //행성의 갯수
	int cx, cy, r; //n줄에 걸쳐 행성계의 중점과 반지름.
	//cout << "테스트 케이스 개수: ";
	cin >> T;

	for (int t = 0; t < T; t++) {
		int count = 0;

		//cout << "출발점과 도착점 입력: ";
		cin >> x1 >> y1 >> x2 >> y2;

		//cout << "행성의 개수 입력:";
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			//cout << "행성의 위치와 반지름 입력: ";
			cin >> cx >> cy >> r;
			double length1 = sqrt(pow(cx - x1, 2) + pow(cy - y1, 2)); //두 점 사이의 거리
			//cout << length1 << endl;
			double length2 = sqrt(pow(cx - x2, 2) + pow(cy - y2, 2)); //두 점 사이의 거리
			//cout << length2 << endl;

			bool start = length1 < r;
			bool end = length2 < r;

			if (start != end) count++;

		}
		//cout << "최소로 지나칠 수 있는 행성의 개수: ";
		cout << count << '\n';
	}

}