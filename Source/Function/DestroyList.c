/*
 * @Descripttion: 这是一个销毁已存在的线性表的函数的接口
 * @Author: Xiao ZhiPeng
 * @version: 1.0
 * @Interface: 
 * @Date: 2021-07-21 09:46:50
 * @LastEditors: xiao zhipeng
 * @LastEditTime: 2021-07-22 09:41:36
 */

#include  "DestroyList.h"

/**
 * @name: DestroyList
 * @description: 销毁已存在的线性表
 * @param {SqList*} list    线性表变量名地址 
 * @return {*}1/0
 */
Status DestroyList(SqList *list) 
{
    //检测线性表是否为空
    if(!list->base) exit(ERROR) ;

    //把线性表各数值置为0，同时释放base空间
    list->length = 0 ;
    list->listsize = 0 ;
    free(list->base) ;
    list->base = NULL ;

    return OK ;

}