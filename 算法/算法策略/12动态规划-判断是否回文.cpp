#include <iostream>
using namespace std;

string maxHW(string s) {
	int len = s.length();
	int start = 0;
	int maxHWLength = 1;
	int dp[50][50] = {};
	for (int j = 1; j < len; j++) {
		for (int i = 0; i < j; i++) {
			if (s[i] == s[j]) {
				if (j - i < 3) {
					dp[i][j] = 1;
				}
				else {
					dp[i][j] = dp[i + 1][j - 1];
				}
			}
			if (dp[i][j] == 1 && (j - i + 1) > maxHWLength) {
				maxHWLength = j - i + 1;
				start = i;
			}
		}
	}
	return s.substr(start, maxHWLength);
}

int main() {
	string s = "adbabcbabcbc";
	cout << "maxHW(s): " << maxHW(s) << endl;
	return 0;
}


/*
#include <iostream>
using namespace std;


函数 maxHW
功能： 用动态规划策略，找出字符串s中最大的子串。
输入： 字符串s（假设长度不超过50）
返回： 最长的回文子串
算法流程：
	初始化：
		所有单个字符都是回文，初始化为第一个字符
		int start = 0; int maxHWLength = 1;
	遍历所有可能得字符串（左端点j从大到小，右端点i从0到j-1)
		判断s[i] == s[j],并根据以下规则更新dp[i][j]:
			边界情况（长度<=3， 即 j - i < 3）:
				若s[i] == s[j]，则一定是回文。
			一般情况（长度>3）：
				若s[i]  == s[j]，且s[i+1...j-1]是回文(dp[i+1][j-1] = 1)，则s[i...j]是回文。
			若dp[i][j] ==1 （是回文），更新maxHWLength和start.
	返回：s.substr(start, maxHWLength);


string maxHW(string s) {
	int len = s.length();
	//	初始化最长回文子串的起始位置。
	int start = 0;
	//	初始化最长回文子串的长度为1。
	int maxHWLength = 1;

	
		定义二维动态规划数组
		dp[i][j]表示，子串s[i...j]是否是回文。
			若dp[i][j] == 1, 则子串s[i...j]是回文。
			若dp[i][j] == 0, 则子串s[i...j]不是回文。
		数组大小固定为50x50，适用于长度不超过50的字符串。
		整个数组初始化为0，默认都不是回文。
	
	int dp[50][50] = {};

	//	外层循环，遍历子串右端点j,从1开始(j=0时，子串长度为1，不需要判断)。
	for (int j = 1; j < len; j++) {
		//	内存循环，遍历子串左端点，i从0到j-1，
		for (int i = 0; i < j; i++) {
			//	只有左右两端相等时，才有可能是回文
			if (s[i] == s[j]) {
				if (j - i < 3)
				{
					
					满足以下条件，是回文：
						边界情况（长度<=3， 即 j - i < 3）:
						若s[i] == s[j]，则一定是回文。
					
					dp[i][j] = 1;
				}
				else {
					
					 满足以下条件，是回文：
						一般情况（长度>3）：
						若s[i]  == s[j]，且s[i+1...j-1]是回文(dp[i+1][j-1] = 1)，则s[i...j]是回文。
					
					dp[i][j] = dp[i + 1][j - 1];
				}
				//	即使s[i] == s[j]，上述以外的其他情况下s[i...j]也不是回味，dp[i][j]保持默认值0即可。
			}
			
				s[i] != s[j] 时，s[i...j] 不是回文，dp[i][j]保持默认值0即可。
			
			//	如果s[i...j]是回文且s[i...j]的长度大于当前最大长度
			if (dp[i][j] == 1 && (j - i + 1) > maxHWLength) {
				//	更新最大长度
				maxHWLength = j - i + 1;
				//	更新起始位置。
				start = i;
			}
		}
	}
	return s.substr(start, maxHWLength);
}

int main() {
	string src = "cdccabcbadddd";
	cout << maxHW(src) << endl;
	return 0;

}
*/