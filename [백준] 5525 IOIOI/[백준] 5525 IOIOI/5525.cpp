#include <iostream>
#include <string>

using namespace std;

int N, M, res;
string s;
int val[1000001];

void calc() {
	for (int i = 0; i < M; i++) {
		if (s[i] == 'I') {
			if (i - 1 >= 0 && s[i - 1] == 'O') {
				if (i - 2 >= 0 && s[i - 2] == 'I') {
					val[i] = val[i - 2] + 1;
					if (val[i] >= N)
						res++;
				}
			}
		}
	}
}

int main(void) {
	cin >> N >> M >> s;

	calc();
	cout << res << "\n";

	return 0;
}