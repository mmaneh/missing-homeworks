#include <stdio.h>

int power(int num, int i) {
	int res = 1;
	while(i--) {
		res *= num;
	}
	return res;
}


int main() {

	int num = 0; 
	printf("Enter a number: ");
	scanf("%d", &num);

	int tmp = num;
	int size = 0;

	while (tmp) {
		tmp /= 10;
		++size;
	}
	
	tmp = num;
	int sum = 0;

	while (tmp) {
		sum += power(tmp % 10, size);
		tmp /= 10;
	}

	if (sum == num)  {
		printf("YES\n");
	} else {
		printf("NO\n");
	}

	return 0;

}
