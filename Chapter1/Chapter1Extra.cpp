#include <iostream>
#include <cstring> //strcpm() 함수를 사용하기 위해서 필요한 헤더파일.
#include <string>>
using namespace std;

int main()
{
	string saddoPosition;
	string arangPosition;

	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << endl;
	cout << "사또 >> "; 
	cin >> saddoPosition; // ccin.getline(char buf[], int size, char delimitChar)  // (버퍼, 크기, 구분 문자)로 공백을 포함해서도 받을 수 있음.
	cout << "아랑 >> ";
	cin >> arangPosition;

	string result = "";
	if (saddoPosition == arangPosition)
		result = "비겼습니다.";

	else if (saddoPosition == "가위")
	{
		if (arangPosition == "바위")
			result = "아랑이 이겼습니다.";
		else // 가위 vs 보
			result = "사또가 이겼습니다.";
	}
	else if (saddoPosition == "바위")
	{
		if (arangPosition == "가위")
			result = "사또가 이겼습니다.";
		else // 바위 vs 보
			result = "아랑이 이겼습니다.";
	}
	else
	{
		if (arangPosition == "가위")
			result = "아랑이 이겼습니다.";
		else // 보 vs 바위
			result = "사또가 이겼습니다.";
	}
	
	cout << "결과는 " + result << endl;
	return 0;
}