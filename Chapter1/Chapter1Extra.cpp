#include <iostream>
#include <cstring> //strcpm() �Լ��� ����ϱ� ���ؼ� �ʿ��� �������.
#include <string>>
using namespace std;

int main()
{
	string saddoPosition;
	string arangPosition;

	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���." << endl;
	cout << "��� >> "; 
	cin >> saddoPosition; // ccin.getline(char buf[], int size, char delimitChar)  // (����, ũ��, ���� ����)�� ������ �����ؼ��� ���� �� ����.
	cout << "�ƶ� >> ";
	cin >> arangPosition;

	string result = "";
	if (saddoPosition == arangPosition)
		result = "�����ϴ�.";

	else if (saddoPosition == "����")
	{
		if (arangPosition == "����")
			result = "�ƶ��� �̰���ϴ�.";
		else // ���� vs ��
			result = "��ǰ� �̰���ϴ�.";
	}
	else if (saddoPosition == "����")
	{
		if (arangPosition == "����")
			result = "��ǰ� �̰���ϴ�.";
		else // ���� vs ��
			result = "�ƶ��� �̰���ϴ�.";
	}
	else
	{
		if (arangPosition == "����")
			result = "�ƶ��� �̰���ϴ�.";
		else // �� vs ����
			result = "��ǰ� �̰���ϴ�.";
	}
	
	cout << "����� " + result << endl;
	return 0;
}