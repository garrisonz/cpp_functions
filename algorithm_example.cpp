//
//  Created by grs on 15/4/7.
//  Copyright (c) 2015年 grs. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


/**
 * 从 1...n 中，取 m 个数的所有组合
 *
 * 使用方法：申明一个长度为 m 的整型向量 b
 * 如：
 *    vector<long> b(2);
 *    combine2(3, b.size(), b);
 *
 *
 * 原理:
 * (1) 确定 m 个元素中最大值 的可能值 i (i 等于 n~m 其中一个值), 存放在 b[m-1] 处
 * (2) 当 m>1 时，按照 (1) 中方法 确定第 m-1 个元素中最大值 的可能值
 * (3) 当 m=1 时，得到一个组合，在向量 b 中
 *
 */
void combine2( long n, long m,  vector<long> b){
    
    for(long i=n; i>=m; i--){
        
        b[m-1] = i - 1;
        
        if (m > 1){

            combine2(i-1,m-1,b);
        } else {

            // m == 1, 输出一个组合

            for ( long i = b.size() -1; i >= 0 ; i--) {
                cout << b[i] << " ";
            }
            cout << endl;
                        
        }
    }
}
