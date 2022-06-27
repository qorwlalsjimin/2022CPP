class Computer {
public:
	void ON();
	void OFF();
private:
	int memory; //메모리
	int CPUperformance; //주기억장치 성능
};

class Mobile : public Computer{
public:
	void goBack();
	bool isTouchByHand();
	void takePicture();
private:
	int battery;
	char* modelName; 
};