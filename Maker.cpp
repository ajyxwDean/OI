#include <bits/stdc++.h>
using namespace std;
int main() {
	for (int i = 1; i <= 100; ++i) {
		system("mk.exe > mk.out");
		system("show.exe < mk.out > show.out");
		system("force.exe < mk.out > force.out");
		if (system("fc show.out force.out")) {
			puts("WA");
			exit(0);
		}
		puts("AC");
	}
	return 0;
}
