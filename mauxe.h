#pragma once
#ifndef mauxe_h
#define mauxe_h
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class mauxe
{
private:
	string phienBanXe;
	string mauSac;
	string phanLoai;
public:
	const string phienBan1 = "Fadil";
	const string phienBan2 = "LuxA";
	const string phienBan3 = "LuxSA";

	const string mauSac1 = "Den";
	const string mauSac2 = "Trang";
	const string mauSac3 = "Cam";
	const string mauSac4 = "Xanh";
	const string mauSac5 = "Xam";
	const string mauSac6 = "Do";
	const string mauSac7 = "Bac";

	const string phanLoai1 = "Tieu Chuan";
	const string phanLoai2 = "Nang Cao";
	const string phanLoai3 = "Cao Cap";

	mauxe();
	mauxe(string, string, string);
	mauxe(const mauxe& mx);
	void setMauXe(string pb, string ms, string pl);
	mauxe& operator=(const mauxe& mx);
	string getPhienBanXe();
	string getMauSac();
	string getPhanLoai();

	friend istream& operator>>(istream& inDev, mauxe& mx);
	friend ostream& operator<<(ostream& outDev,const mauxe& mx);
};

#endif // !mauxe_h

