#include "nhamayoto.h"

nhamayoto::nhamayoto()
{
	dsMauXe.resize(1);
	dsMauXe[0] = new mauxe;
	dsMauXe[0] = NULL;
}
nhamayoto::nhamayoto(const nhamayoto& nmot)
{
	dsMauXe = nmot.dsMauXe;
}
mauxe nhamayoto::getMauXe(const mauxe &mx)
{
	return mx;
}
bool nhamayoto::timMauXe(mauxe mx)
{
	bool check = false;
	if (dsMauXe.size() == 1 && dsMauXe[0] == NULL)
	{
		return check;
	}
	else
	{
		for (int i = 0; i < dsMauXe.size(); i++)
		{
			if (mx.getPhienBanXe() == dsMauXe[i]->getPhienBanXe() && mx.getMauSac() == dsMauXe[i]->getMauSac() && 
				mx.getPhanLoai() == dsMauXe[i]->getPhanLoai())
			{
				check = true;
				return check;
			}
		}
	}
	return check;
}
void nhamayoto::themMauXe(mauxe mx)
{
	if (timMauXe(mx) == true)
		return;
	else
	{
		dsMauXe.pop_back();
		dsMauXe.push_back(&mx);
	}
}
ostream& operator<<(ostream& outDev, const nhamayoto& nmot)
{
	for (int i = 0; i < nmot.dsMauXe.size(); i++)
	{
		outDev << nmot.dsMauXe[i]->getPhienBanXe() << " " << nmot.dsMauXe[i]->getMauSac() << " " << nmot.dsMauXe[i]->getPhanLoai() << endl;
	}
	return outDev;
}
xethuongmai nhamayoto::sanxuatXTM(xethuongmai xtm, mauxe mx)
{
	xethuongmai newXTM;
	newXTM.set(mx, xtm.getGiaBan());
	return newXTM;
}

