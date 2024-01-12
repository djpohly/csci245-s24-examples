int plusone(int x) {
	return x + 1;
}

int plusone2(int x) {
	return x - (-1);
}

int plusone3(int x) {
	int y = (x * 2) + 2;
	return y / 2;
}

int plusone4(int x) {
	if (x < 0) {
		return -(-x - 1);
	} else {
		return x + 1;
	}
}

// PRECONDITION: x >= 0
int plusone5(int x) {
	int y = 1;
	while (x > 0) {
		x--;
		y++;
	}
	return y;
}
