
#include <stdio.h>
#include "HumanDetect.hpp"
#pragma comment(lib, "CVProject.lib") //引入YOLO动态链接库

int main()
{
	unsigned char version[10]={0};
	//获取版本号
	module_getversion(version);
	//初始化检测器
	int rtn1 = module_init("weights\\nanodet-plus-m_320.onnx", "weights\\yolov7-lite-face.onnx", MEDIUMCONFIGURATION);
	//检测
	int rtn2 = module_detection("images/bus.jpg");

	return 1;
}