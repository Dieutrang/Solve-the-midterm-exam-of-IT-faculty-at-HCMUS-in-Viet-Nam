#include "mauxe.h"
#include "xethuongmai.h"
#include "nhamayoto.h"

int main()
{
	mauxe mx;
	cin >> mx;
	cout << mx;
	cout << endl;

	xethuongmai xtm;
	cin >> xtm;
	cout << xtm;
	cout << endl;

	nhamayoto nmot;
	nmot.themMauXe(mx);
	cout << nmot;

	xethuongmai xeA("LuxA", "Den", "TieuChuan", 95000000.0, "Trang21402");
	xeA = xeA - 5.5;
	cout << xeA;


	return 0;
}