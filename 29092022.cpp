#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char maxLength[50];

	cout << "Enter your password: ";
	cin >> maxLength;
	if (strlen(maxLength) >= 6 && strlen(maxLength) <= 10) {
		int upperCount = 0;
		int lowerCount = 0;
		int numCount = 0;
		int specialCount = 0;

		for (int i = 0; i < strlen(maxLength); i++) {
			if (maxLength[i] != '.' && maxLength[i] != ',' && maxLength[i] != ':' && maxLength[i] != '?') {
				if (maxLength[i] >= 'A' && maxLength[i] <= 'Z') upperCount++;
				if (maxLength[i] >= 'a' && maxLength[i] <= 'z') lowerCount++;
				if (maxLength[i] >= '0' && maxLength[i] <= '9') numCount++;
				if (maxLength[i] == '!' || maxLength[i] == '@' || maxLength[i] == '#' || maxLength[i] == '$' || maxLength[i] == '%' || maxLength[i] == '^'
					|| maxLength[i] == '&' || maxLength[i] == '*' || maxLength[i] == '(' || maxLength[i] == ')' || maxLength[i] == '+') specialCount++;
			} else cout << "Password must not contain illegal characters.\n";
			break;
		}

		if (upperCount == 0 || lowerCount == 0 || numCount == 0 || specialCount == 0) {
			if (upperCount == 0) cout << "Password must contain at least 1 uppercase letter.\n";
			if (lowerCount == 0) cout << "Password must contain at least 1 lowercase letter.\n";
			if (numCount == 0) cout << "Password must contain at least 1 number.\n";
			if (specialCount == 0) cout << "Password must contain at least 1 special character.\n";
		} else cout << "Password is accepted.";
	} else cout << "Password length must be between 6-10 characters.\n";

	return 0;
}
