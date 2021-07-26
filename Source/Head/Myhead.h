/*
 * @Descripttion: 这是一个关于线性表的自定义变量的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-21 08:13:42
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-21 10:40:20
 */

#ifndef  __MYHEAD_H__
#define  __MYHEAD_H__

#include <stdio.h>
#include <stdlib.h>

#define   ERROR     0
#define   OK        1
#define   False     0
#define   True      1
#define   OVERFLOW      -1

typedef   int   elemtype ;
typedef   int   Status  ;

#define     LIST_INIT_SIZE      5*sizeof(elemtype)      //初始化长度
#define     LISTINCREMENT         3*sizeof(elemtype)       //分配增量

typedef struct SQLIST
{
    elemtype *  base  ;     //线性表基地址
    int   length ;          //线性表当前长度  
    int   listsize  ;       //线性表总长度
}SqList ;

#endif