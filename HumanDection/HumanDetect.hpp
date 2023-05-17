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

#define      LOWCONFIGURATION             1  //����   ����ͷ�ڵ���ҹ���������
#define      MEDIUMCONFIGURATION          2  //����   ����ͷ�ڵ� + �����ڵ���ҹ���������
#define      HIGHCONFIGURATION            3  //����   ˫Ŀ  ����ͷ�ڵ� + �����ڵ�

//������
#define      NORMAL                       1 //����
#define      CAMERAOCCLUSION             -1 //����ͷ���ڵ�
#define      FACEOCCLUSION               -2 //�������ڵ�
#define      IMAGEERROR                  -3 //ͼ�������ȡ����������·������ȷ
#define      MODULDEFINEEERROR           -4 //ģ�Ͷ������
#define      MODULLOADEERROR             -5 //ģ�ͼ��س���
#define      CONFIGURATIONERROR          -6 //���ô���Ŀǰֻ֧�ֵ��������

using namespace std;
//��ȡ�汾��
extern "C" LIB_API void module_getversion(unsigned char* version);
//��ʼ������������ز���
extern "C" LIB_API int module_init(const string humandetFilepath, const string facedetFilepath, int moduleLevel);
//��⺯��
extern "C" LIB_API int module_detection(const string filename);

#endif
#endif