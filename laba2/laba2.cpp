#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;


void fun1() {
	double d, s, r, l, p = 3.14;
	setlocale(LC_ALL, "Russian");
	cout << "Введите площадь круга: ";
	cin >> s;
	r = sqrt(s / p);
	d = 2 * r;
	l = 2 * p * r;
	cout << "Диаметр = " << d << " Длина окружности = " << l;
}

void fun2() {
	int cntd = 0, cntt = 0;
	string s;
	getline(cin, s);
	s += " ";
	//char s[] = "ign igg ezn smg ";
	set <string> sett;
	sett.insert("00");
	for (int i = 0; i < s.length() + 1; i++) {
		if (s[i] != ' ') {
			if (s[i] == 'i') {
				cntd += 2;
			}
			else if (s[i] == 'g') {
				cntd += 1;
				cntt += 2;
			}
			else if (s[i] == 'n') {
				cntd += 1;
				cntt += 1;
			}
			else if (s[i] == 'e') {
				cntd += 1;
			}
			else if (s[i] == 'z') {
				cntd += 2;
				cntt += 2;
			}
			else if (s[i] == 's') {
				cntd += 3;
			}
			else if (s[i] == 'm') {
				cntt += 2;
			}
			else if (s[i] == 'r') {
				cntt += 1;
				cntd += 2;
			}
			else if (s[i] == 'a') {
				cntt += 1;
				cntd += 1;
			}
			else if (s[i] == 'b') {
				cntt += 1;
				cntd += 3;
			}
			else if (s[i] == 'c') {
				cntt += 2;
				cntd += 2;
			}
			else if (s[i] == 'd') {
				cntt += 1;
				cntd += 2;
			}
			else if (s[i] == 'f') {
				cntt += 1;
				cntd += 3;
			}
			else if (s[i] == 'h') {
				cntt += 0;
				cntd += 4;
			}
			else if (s[i] == 'j') {
				cntt += 3;
				cntd += 1;
			}
			else if (s[i] == 'k') {
				cntt += 2;
				cntd += 1;
			}
			else if (s[i] == 'l') {
				cntt += 1;
				cntd += 3;
			}
			else if (s[i] == 'o') {
				cntt += 3;
			}
			else if (s[i] == 'q') {
				cntt += 3;
				cntd += 1;
			}
			else if (s[i] == 'p') {
				cntt += 2;
				cntd += 2;
			}
			else if (s[i] == 'v') {
				cntt += 1;
				cntd += 3;
			}
			else if (s[i] == 't') {
				cntt += 1;
				cntd += 0;
			}
			else if (s[i] == 'u') {
				cntt += 1;
				cntd += 2;
			}
			else if (s[i] == 'w') {
				cntt += 2;
				cntd += 1;
			}
			else if (s[i] == 'x') {
				cntt += 2;
				cntd += 2;
			}
			else if (s[i] == 'y') {
				cntt += 3;
				cntd += 1;
			}
		}
		else if (s[i] == ' ' || s[i] == '\0') {
			string y = to_string(cntt);
			string x = to_string(cntd);
			string a = (y + x);
			sett.insert(a);
			cntd = 0;
			cntt = 0;
		}

	}
	cout << sett.size() - 1;
}
void fun3() {
	bool p = true;
	string str = "";
	//char s[] = "12 31 123 443 113 789 ";
	string s;
	getline(cin, s);
	s += " ";
	if (s[1] > s[0] && s[0] != ' ') {
		str += s[0];
	}
	for (int i = 1; i < s.length() + 1; i++) {
		if (s[i] != ' ') {
			if (s[i] <= s[i - 1]) {
				str = "";
				p = false;
				continue;
			}
			else {
				str += s[i];
			}
		}
		else if (s[i] = ' ' && p) {
			for (int j = str.length(); j > -1; j--)
			{
				cout << str[j];
			}
			cout << " ";
			str = "";
		}
		else if (s[i] = ' ') {
			str = "";
			p = true;
		}
	}
}
int main()
{



	//fun3();
	//fun2();
	fun1();
}

