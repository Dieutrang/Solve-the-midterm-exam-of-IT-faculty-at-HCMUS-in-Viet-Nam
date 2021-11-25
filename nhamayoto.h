#pragma once
#ifndef nhamayoto_h
#define nhamayoto_h

#include "mauxe.h"
#include "xethuongmai.h"
#include <vector>


class nhamayoto
{
private: 
	vector <mauxe*> dsMauXe;
public:
	nhamayoto();
	nhamayoto(const nhamayoto &nmot);
	mauxe getMauXe(const mauxe &mx);
	bool timMauXe(mauxe mx);
	void themMauXe(mauxe mx);
	friend ostream& operator<<(ostream& outDev, const nhamayoto& mnot);
	xethuongmai sanxuatXTM(xethuongmai xtm, mauxe mx);
};
#endif
