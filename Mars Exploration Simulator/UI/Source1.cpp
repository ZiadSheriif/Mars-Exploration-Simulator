#include<iostream>
#include<fstream>
#include"UI.h"
#include"../MarsStation/MarsStation.h"
using namespace std;
int main()
{
	MarsStation *MS = new MarsStation();
	UI u(MS);
	cout << MS->getAvgSpeed() << endl;
	cout << "Emergency rovers \n\n";
	MS->printEmRovers();
	cout << "\n\nmountainous rovers \n\n";
	MS->printMountRovers();
	cout << "\n\Polar rovers \n\n";
	MS->printPolarRovers();
	
	MS->executeEvents();
	cout << "\n\nEmergency Missions \n\n";
	MS->PrintEmergencyList();
	cout << "\n\nmount Missions \n\n";
	MS->PrintMountList();
	cout << "\n\nPolar Missions \n\n";
	MS->printPolarList();
	cout << "No of Em Rovers : " << MS->getEmRoverCount() << endl;
	cout << "No of mount Rovers  : " << MS->getMountRoverCount() << endl;
	cout << "No of Pol Rovers  : " << MS->getPolRoverCount() << endl;
	cout << "No of event : " << MS->getEventCount() << endl;
	cout << "No of Total Rovers  : " << MS->getTotalNoRovers() << endl;
	cout << "Mode of operation :" << ((MS->getModeOperation() == Interactive) ? "Interactve" :
		(MS->getModeOperation() == step_by_step) ? "step_by_step":
		(MS->getModeOperation() == silent) ? "silent" : "Error");
//	u.outputStart();
	return 0;
}
//ofstream out;
//out.open("OutputFiles/Output.txt");
//if (out.is_open())
//	out << "Hello" << endl;
//else
//	cout << "Error";
//ifstream in("InputFiles/Input.txt");
//int x;
//in >> x;
//cout << "X = " << x<<" ";
//in >> x;
//cout << "X = " << x << " ";