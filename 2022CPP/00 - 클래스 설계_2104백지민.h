class Computer {
public:
	void ON();
	void OFF();
private:
	int memory; //�޸�
	int CPUperformance; //�ֱ����ġ ����
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