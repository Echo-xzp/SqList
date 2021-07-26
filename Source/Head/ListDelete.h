/*
 * @Descripttion: 这是一个在指定位置删除线性表元素,并返回被删除元素的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-22 15:21:13
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-22 15:29:15
 */

#ifndef     __LISTDELETE_H__
#define     __LISTDELETE_H__

#include  "Myhead.h"

Status  ListDelete(SqList *list , int pos , elemtype* del) ;

#endif