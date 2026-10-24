/*
2.统计字符重复次数
需求：统计某个字符串中每个字符出现的次数，以对组的形式保存在map中，key代表字符，value代表该字符出现的次数。
*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

// 统计字符出现次数的函数
map<char, int> countCharacters(string& s) {
    map<char, int> m;  // 使用char作为key，int作为value

    // 遍历字符串中的每个字符
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];  // 当前字符

        // 在map中查找当前字符
        map<char, int>::iterator it = m.find(c);

        if (it != m.end()) {
            // 字符已存在，出现次数+1
            it->second++;
        }
        else {
            // 字符不存在，插入新记录，次数为1
            m[c] = 1;
        }
    }

    return m;
}

// 简化的实现方法
map<char, int> countCharacters2(string& s) {
    map<char, int> m;

    for (int i = 0; i < s.size(); i++) {
        m[s[i]]++;  // 直接通过下标访问，如果不存在会自动创建并初始化为0
    }

    return m;
}

// 打印统计结果的函数
void printCount(map<char, int>& m) {
    cout << "字符出现次数统计：" << endl;
    cout << "字符\t次数" << endl;
    cout << "----------" << endl;

    for (map<char, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "'" << it->first << "'\t" << it->second << endl;
    }
    cout << endl;
}

int main() {
    // 测试字符串
    string s = "hihugheriewghguhewa";

    cout << "原始字符串：" << s << endl;
    cout << "字符串长度：" << s.length() << endl;
    cout << endl;

    // 使用第一种方法统计
    cout << "=== 使用方法1统计 ===" << endl;
    map<char, int> result1 = countCharacters(s);
    printCount(result1);

    // 使用第二种方法统计
    cout << "=== 使用方法2统计 ===" << endl;
    map<char, int> result2 = countCharacters2(s);
    printCount(result2);

    // 测试另一个字符串
    cout << "=== 测试另一个字符串 ===" << endl;
    string s2 = "hello world! hello c++!";
    cout << "字符串：" << s2 << endl;
    map<char, int> result3 = countCharacters2(s2);
    printCount(result3);

    return 0;
}