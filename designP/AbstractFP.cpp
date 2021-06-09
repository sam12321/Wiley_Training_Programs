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

class Chess:public Games
{
        public:
                void showName()
                {
                        cout<<"Game: Chess"<<endl;
                }
                void showPlayers()
                {
                        cout<<"Players: 2"<<endl;
                }
};

class Darts:public Games
{
        public:
                void showName()
                {
                        cout<<"Game: Darts"<<endl;
                }
                void showPlayers()
                {
                        cout<<"Players: 1"<<endl;
                }
};

class Foosball:public Games
{
        public:
                void showName()
                {
                        cout<<"Game: Foosball"<<endl;
                }
                void showPlayers()
                {
                        cout<<"Players: 2"<<endl;
                }
};

class Factory
{
	public:
		static Factory* getType(char fc);
		virtual Games* getGame(char code)=0;
};



class Outdoor:public Factory
{
  public:
        Games* getGame(char code)
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

class Indoor:public Factory
{
  public:
        Games* getGame(char code)
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

Factory* Factory::getType(char fc)
{
	if(fc=='O')
		return new Outdoor();
	else if(fc=='I')
		return new Indoor();
	else
		return NULL;
}

int main()
{	Factory *cf=Factory::getType('O');
	//Games *game=Factory::getGame('b');
	Games *game=cf->getGame('b');
	game->showName();
	game->showPlayers();
}
	
