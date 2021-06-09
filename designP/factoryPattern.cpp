#include<iostream>
using namespace std;

class Games
{
public:
	virtual void showName()=0;
	virtual void showPlayers()=0;
};

class Football:public Games
{
	public:
		void showName()
		{
			cout<<"Game: Football"<<endl;
		}
		void showPlayers()
		{
			cout<<"Players: 11"<<endl;
		}
};

class Cricket:public Games
{
        public:
                void showName()
                {
                        cout<<"Game: Cricket"<<endl;
                }
                void showPlayers()
                {
                        cout<<"Players: 11"<<endl;
                }
};

class Basketball:public Games
{
        public:
                void showName()
                {
                        cout<<"Game: Basketball"<<endl;
                }
                void showPlayers()
                {
                        cout<<"Players: 5"<<endl;
                }
};

class Factory
{
	public:
	static Games* getGame(char code)
	{
		if(code=='c')
		return new Cricket;
		else if(code=='b')
			return new Basketball;
		else if(code=='f')
			return new Football;
		else 
			return NULL;
	}
};

int main()
{
	Games *game=Factory::getGame('b');
	game->showName();
	game->showPlayers();
}
	
