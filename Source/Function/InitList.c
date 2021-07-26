/*
 * @Descripttion: 这是一个初始化线性表的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-21 08:43:42
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-21 17:44:53
 */

#include   "InitList.h"

/**
 * @name: InitList
 * @description: 初始化一个线性表
 * @param {SqList*} list  线性表变量名地址
 * @return {*}1/-1
 */
Status InitList(SqList* list)
{
    //为线性表基地址分配一段内存
    list->base = (elemtype*)malloc(LIST_INIT_SIZE) ;
    if(!list->base)    exit(OVERFLOW) ;   //分配失败

    list->length = 0 ;       //当前长度为0
    list->listsize = LIST_INIT_SIZE / sizeof(elemtype) ;        //初始化储存总量

    return OK ;

}