#pragma once
#ifndef xethuongmai_h
#define xethuongmai_h
#include "mauxe.h"

class xethuongmai
{
private:
	mauxe mauXe;
	float giaBan;
	string bienSoXe;
public:
	xethuongmai();
	xethuongmai(const mauxe &mx, float gb);
	xethuongmai(const xethuongmai& xtm);
	xethuongmai(string isPhienBanXe, string isMauSac, string isPhanLoai, float isGiaBan, string isBSX);
	float getGiaBan();
	mauxe getMauXe();
	string getBienSoXe();
	friend istream& operator>>(istream& inDev, xethuongmai& xtm);
	friend ostream& operator<<(ostream& outDev,const xethuongmai& xtm);
	void set(mauxe mx, float isGb);
	void dangkyBSX(string isBSX);
	xethuongmai operator-(float x);

};
#endif
