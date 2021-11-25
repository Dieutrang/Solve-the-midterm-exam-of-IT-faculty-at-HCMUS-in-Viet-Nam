#include "xethuongmai.h"

xethuongmai::xethuongmai(const mauxe& mx, float gb)
{
	mauXe = mx;
	if (gb > float(0))
		giaBan = gb;
	else
		giaBan = 0;
}
xethuongmai::xethuongmai()
{
	mauXe.setMauXe(mauXe.phienBan1, mauXe.mauSac1, mauXe.phanLoai1);
	giaBan = 0;
	bienSoXe = "Trang123";
}
xethuongmai::xethuongmai(const xethuongmai& xtm)
{
	mauXe = xtm.mauXe;
	giaBan = xtm.giaBan;
	bienSoXe = xtm.bienSoXe;
}
xethuongmai::xethuongmai(string isPhienBanXe, string isMauSac, string isPhanLoai, float isGiaBan, string isBSX)
{
	mauXe.setMauXe(isPhienBanXe, isMauSac, isPhanLoai);
	giaBan = isGiaBan;
	bienSoXe = isBSX;
}
istream& operator>>(istream& inDev, xethuongmai& xtm)
{
	cout << "Nhap mau xe: " << endl;
	inDev >> xtm.mauXe;
	do
	{
		cout << "Nhap gia ban: ";
		inDev >> xtm.giaBan;
		if (xtm.giaBan < float(0))
		{
			cout << "Vui long nhap lai !" << endl;
		}
		
	} while (xtm.giaBan< float(0));
	inDev.ignore();
	cout << "Nhap bien so xe: ";
	getline(inDev, xtm.bienSoXe);
	return inDev;
}
ostream& operator<<(ostream& outDev, const xethuongmai& xtm)
{
	outDev << xtm.mauXe;
	outDev <<fixed<<setprecision(5)<<float(xtm.giaBan) << endl;
	outDev << xtm.bienSoXe << endl;
	return outDev;
}
float xethuongmai::getGiaBan()
{
	return giaBan;
}
mauxe xethuongmai::getMauXe()
{
	mauxe mx;
	mx.setMauXe(mauXe.getPhienBanXe(), mauXe.getMauSac(), mauXe.getPhanLoai());
	return mx;
}
string xethuongmai::getBienSoXe()
{
	return bienSoXe;
}
void xethuongmai::set(mauxe mx, float isGb)
{
	mauXe = mx;
	giaBan = isGb;
}
void xethuongmai::dangkyBSX(string isBSX)
{
	bienSoXe = isBSX;
}
xethuongmai xethuongmai::operator-(float x)
{
	float y = giaBan - float(x) ;
	giaBan = y;
	return *this;
}