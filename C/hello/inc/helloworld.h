/***************************************************************************
* Copyright (c) 2019~2020 嵌入式案例
* All rights reserved
* 
* 文件名称：filename.h
* 
* 摘    要：外部需要访问XX模块的程序或全局变量时，
*           只要包含该文件就可以了
* 公开的函数有：
    xxxx
    xxxx
    xxxx
* 调用的模块有：
	1、
	2、
	3、
* 被调用的模块有：            
	1、
	2、
	3、
* 
* 创 建 者：邱朋
* 
* 创建日期：2020年03月26日
*
* 修改记录
日期  修改者   		版本     修改内容
-------------- 		-------  ------------------------  

****************************************************************************/

/*防止重复引用 */
#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <stdio.h>


/*将外部包含和内部包含分开*/
#ifdef _HELLOWORLD_H_
    #define HELLOWORLD_EXT_PARA
    #define HELLOWORLD_EXT_FUNC
#else
	#ifdef __cplusplus
		#define HELLOWORLD_EXT_PARA  EXTERN_C
		#define HELLOWORLD_EXT_FUNC  extern
	#else
		#define HELLOWORLD_EXT_PARA  extern
		#define HELLOWORLD_EXT_FUNC  extern		
	#endif
#endif

//---------------------------------------------------------------------
//全局常量定义
//---------------------------------------------------------------------
/*enum
{
	DIG_NUM = 8
};*/


//---------------------------------------------------------------------
//全局类型定义
//---------------------------------------------------------------------
/*typedef struct 
{
    struct link idata *next;
    char   code *test;
}recLink;*/

//---------------------------------------------------------------------
//全局变量，可以被外部程序直接访问
//---------------------------------------------------------------------
//FILENAME_EXT_PARA u8 g_xxx;       //变量说明


/*公开的过程/函数*/
//---------------------------------------------------------------------
//函数介绍
//---------------------------------------------------------------------
#ifdef __cplusplus
extern "C"
{
#endif

//FILENAME_EXT_FUNC u8 filename_AFunctionName
//(
//	u16 i		//参数含义
//);
HELLOWORLD_EXT_FUNC int test_hello(char * str);
#ifdef __cplusplus
}
#endif
#endif