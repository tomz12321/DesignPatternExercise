#ifndef SECRETARY_H
#define SECRETARY_H
#include "Subject.h"
#include <vector>
#include <string>

using namespace std;

class Secretary : public iSubject
{
	string m_action;
public:
	//櫃台狀態
	void Set(string action);	
	string Get();
private:
	vector<Observer*> m_observers;
public:
	//增加
	void Attach(Observer* observer);
	//通知
	void Notify();
	void Detach(Observer* observer);
};
#endif