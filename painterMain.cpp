#include "paintFrame.h"
#include <iostream>
#include <exception>

// �ϴ��� ���� ���� 1���� ����Ѵ�.
extern Frame* theFrame;
int main() {
	try {
		theFrame = new PaintFrame("��ü1������Ʈ2022", 1000, 800); //Frame�� �ڵ鷯
		theFrame->initialize();
		theFrame->run();
	}
	catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

}