#include <iostream>
using namespace std;

class cu{
private:
	int reel,sanal;
public:
	cu(){}
	cu(int reel,int sanal){
		this->reel=reel;
		this->sanal=sanal;
	}
	void setreel(int reel){
		this->reel=reel;
	}
	void setsanal(int sanal){
		this->sanal=sanal;
	}
	int getreel(){
		return reel;
	}
	int getsanal(){
		return sanal;
	}
	void topla(cu a1,cu a2){
		cout<<"("<<a1.getreel()<<" + "<<a1.getsanal()<<"i)"<<" + "<<"("<<a2.getreel()<<" + "<<a2.getsanal()<<"i)"<<" = "<<a1.getreel()+a2.getreel()<<" + "<<a1.getsanal()+a2.getsanal()<<"i"<<endl;
	}

	void carp(cu a1,cu a2){
		cout<<"("<<a1.getreel()<<" + "<<a1.getsanal()<<"i)"<<" * "<<"("<<a2.getreel()<<" + "<<a2.getsanal()<<"i)"<<" = "<<a1.getreel()*a2.getreel()-a1.getsanal()*a2.getsanal()<<" + "<<a1.getreel()*a2.getsanal()+a2.getreel()*a1.getsanal()<<"i"<<endl;
	}
};
int main()
{
	cu a1(1,2);
	cu a2(3,1);
	a1.topla(a1,a2);
	a1.carp(a1,a2);
	
	return 0;
}