#ifndef __PLATFORMINFO__
#define __PLATFORMINFO__

struct PlatformInfo
{
	int platformName;
	int orderPort, pricePort, tickPort;
	string server, accountNo, password;
};
#endif