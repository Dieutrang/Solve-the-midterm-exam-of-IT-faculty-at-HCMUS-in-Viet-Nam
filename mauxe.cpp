#include "mauxe.h"

mauxe::mauxe()
{
	phienBanXe = "";
	mauSac = "";
	phanLoai = "";
}
mauxe::mauxe(string isPhienBanXe, string isMauSac, string isPhanLoai)
{
	phienBanXe = isPhienBanXe;
	mauSac = isMauSac;
	phanLoai = isPhanLoai;
}

istream& operator>>(istream& inDev, mauxe& mx)
{
	do
	{
		cout << "Nhap phien ban xe (Fadil/LuxA/LuxSA): ";
		getline(inDev, mx.phienBanXe);
		if (mx.phienBanXe != mx.phienBan1 && mx.phienBanXe != mx.phienBan2 && mx.phienBanXe != mx.phienBan3)
		{
			cout << "Vui long nhap lai !" << endl;
		}
	} while (mx.phienBanXe != mx.phienBan1 && mx.phienBanXe != mx.phienBan2 && mx.phienBanXe != mx.phienBan3);

	do
	{
		cout << "Nhap mau sac (Den/Trang/Cam/Xanh/Xam/Do/Bac): ";
		getline(inDev, mx.mauSac);
		if (mx.mauSac != mx.mauSac1 && mx.mauSac != mx.mauSac2 && mx.mauSac != mx.mauSac3 && mx.mauSac != mx.mauSac4
			&& mx.mauSac != mx.mauSac5 && mx.mauSac != mx.mauSac6 && mx.mauSac != mx.mauSac7)
		{
			cout << "Vui long nhap lai !" << endl;
		}
	} while (mx.mauSac != mx.mauSac1 && mx.mauSac != mx.mauSac2 && mx.mauSac != mx.mauSac3 && mx.mauSac != mx.mauSac4
		&& mx.mauSac != mx.mauSac5 && mx.mauSac != mx.mauSac6 && mx.mauSac != mx.mauSac7);

	do
	{
		cout << "Nhap phan loai xe (Tieu Chuan/Nang Cao/Cao Cap): ";
		getline(inDev, mx.phanLoai);
		if (mx.phanLoai != mx.phanLoai1 && mx.phanLoai != mx.phanLoai2 && mx.phanLoai != mx.phanLoai3)
		{
			cout << "Vui long nhap lai !" << endl;
		}
	} while (mx.phanLoai != mx.phanLoai1 && mx.phanLoai != mx.phanLoai2 && mx.phanLoai != mx.phanLoai3);
	return inDev;
}
ostream& operator<<(ostream& outDev, const mauxe& mx)
{
	outDev << mx.phienBanXe << " - " << mx.mauSac << " - " << mx.phanLoai << endl;
	return outDev;
}
void mauxe::setMauXe(string pb, string ms, string pl)
{
	phienBanXe = pb;
	mauSac = ms;
	phanLoai = pl;
}
mauxe& mauxe::operator=(const mauxe& mx)
{
	this->mauSac = mx.mauSac;
	this->phienBanXe = mx.phienBanXe;
	this->phanLoai = mx.phanLoai;
	return *this;

}
mauxe::mauxe(const mauxe& mx)
{
	phienBanXe = mx.phienBanXe;
	mauSac = mx.mauSac;
	phanLoai = mx.phanLoai;
}
string mauxe::getPhienBanXe()
{
	return phienBanXe;
}
string mauxe::getMauSac()
{
	return mauSac;
}
string mauxe::getPhanLoai()
{
	return phanLoai;
}