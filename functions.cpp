//
//  functions.cpp
//  code_jame_Cpp
//
//  Created by grs on 15/3/22.
//  Copyright (c) 2015年 grs. All rights reserved.
//

#include <string>

using namespace std;

/**
 * 替换字符串中的某个字符， 全部替换
 *
 * @param string find , 需要被替换的字符，暂时只支持 1 个字符
 * @param string replace , 用于替换的字符，暂时只支持 1 个字符
 * @param string str , 被替换的字符串
 */
string str_replace(string find, string replace, string str){
    
    size_t nPos= 0;
    
    nPos = str.find(find, nPos);
    
    while(nPos != string::npos){
        
        str.replace(nPos, 1, replace);
        nPos = str.find(find, nPos);
    }
    
    return str;
}







