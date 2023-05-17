#ifndef HumanDetect_HPP
#define HumanDetect_HPP

#ifndef LIB_API
#ifdef LIB_EXPORTS
#if defined(_MSC_VER)
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __attribute__((visibility("default")))
#endif
#else
#if defined(_MSC_VER)
#define LIB_API
#else
#define LIB_API
#endif
#endif
#endif


#ifdef __cplusplus
#include <memory>
#include <vector>
#include <deque>
#include <algorithm>
#include <chrono>
#include <string>
#include <sstream>
#include <iostream>
#include <cmath>

#define C_SHARP_MAX_OBJECTS 1000

#define      LOWCONFIGURATION             1  //低配   摄像头遮挡（夜间检测能力差）
#define      MEDIUMCONFIGURATION          2  //中配   摄像头遮挡 + 人脸遮挡（夜间检测能力差）
#define      HIGHCONFIGURATION            3  //高配   双目  摄像头遮挡 + 人脸遮挡

//错误码
#define      NORMAL                       1 //正常
#define      CAMERAOCCLUSION             -1 //摄像头被遮挡
#define      FACEOCCLUSION               -2 //人脸被遮挡
#define      IMAGEERROR                  -3 //图像输出读取出错，可能是路径不正确
#define      MODULDEFINEEERROR           -4 //模型定义出错
#define      MODULLOADEERROR             -5 //模型加载出错
#define      CONFIGURATIONERROR          -6 //配置错误，目前只支持低配和中配

using namespace std;
//获取版本号
extern "C" LIB_API void module_getversion(unsigned char* version);
//初始化检测器并加载参数
extern "C" LIB_API int module_init(const string humandetFilepath, const string facedetFilepath, int moduleLevel);
//检测函数
extern "C" LIB_API int module_detection(const string filename);

#endif
#endif