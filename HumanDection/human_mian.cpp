
#include <stdio.h>
#include "HumanDetect.hpp"
#pragma comment(lib, "CVProject.lib") //����YOLO��̬���ӿ�

int main()
{
	unsigned char version[10]={0};
	//��ȡ�汾��
	module_getversion(version);
	//��ʼ�������
	int rtn1 = module_init("weights\\nanodet-plus-m_320.onnx", "weights\\yolov7-lite-face.onnx", MEDIUMCONFIGURATION);
	//���
	int rtn2 = module_detection("images/bus.jpg");

	return 1;
}