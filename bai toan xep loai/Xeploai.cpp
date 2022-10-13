#include<iostream>

using namespace std;

int main() {
	int lt, th;
	cout << "nhap diem ly thuyet:";
	cin >> lt;
	cout << endl;
	cout << "nhap diem thuc hanh:";
	cin >> lt;
	cout << endl;

	if(lt<0 || th<0 || lt>70 || th>30) {
        cout << "diem khong hop le" << endl;
	}
	else if(lt+th < 50) {
        cout << "Xep loai C" << endl;
	}
	else if(lt+th < 80) {
        cout << "Xep loai B" << endl;
    }
	else {
        cout << "Xep loai C" << endl;
	}
	return 0;
}
