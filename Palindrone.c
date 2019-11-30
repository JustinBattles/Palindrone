#include<stdio.h>

int pal(int n) {
	unsigned int pl = 1<<31;
	int pr = 1;
	int i;
	for (i = 0; i < 16; i++) {
		int l = n & pl;
		int r = n & pr;
		if (l == 0 && r != 0)
			return 0;
		if (l != 0 && r == 0)
			return 0;
		pr <<= 1;
		pl >>=1;
	}
	return 1;
}

int main() {
	int n = 0xFABC3D5F;
	printf("%d\n", pal(n));
}