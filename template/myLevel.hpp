#ifndef MY_LEVEL
#define MY_LEVEL

#include <Annwvyn.h>
using namespace Annwvyn;

const int ANVPORT = 48161;
const int MAX_PLAYERS = 2;

struct ToServerStc // stuff sent to a server from a client
{
	UCHAR buttons;
	UCHAR playerN;
};

struct ToClientStc // stuff sent to a client from the server
{
	Player player[MAX_PLAYERS];
	UCHAR  gameState;
	UCHAR  sounds; 
};

struct Player
{
	//ShipStc shipData; TODO
	//TorpedoStc torepedoData; TODO
};


//Each level you can create hinerits
//from AnnAbstractLevel
class MyLevel : public AnnAbstractLevel
{
public:
	MyLevel();
	void load();
	void runLogic();
};

#endif //MY_LEVEL