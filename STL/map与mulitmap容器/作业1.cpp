/*
1.修改密码
map中存储多个用户，格式如下：map<int,User>，int代表用户id，User是一个用户对象，User(m_Name,m_Pwd)，有姓名和密码两个属性。
写个函数，根据id和姓名查找某个用户是否存在，如果存在，就将他的密码初始化为888888，
如果不存在，就新建这个用户，给它的密码也初始化为888888
*/

#include <iostream>
#include <map>
using namespace std;

// 定义User类
class User {
public:
	string m_Name;  // 姓名
	string m_Pwd;   // 密码

	// 构造函数
	User(string name = "", string pwd = "") : m_Name(name), m_Pwd(pwd) {}
};

void printAllUsers(map<int, User>& users) {
	for (map<int, User>::iterator it = users.begin(); it != users.end(); it++) {
		cout << it->first << "\t"
			<< it->second.m_Name << "\t"
			<< it->second.m_Pwd << endl;
	}
	cout << endl;
}

void findUser(map<int, User>& users, int id, string name) {
	map<int, User>::iterator it = users.find(id);
	if (it != users.end()) {
		it->second.m_Pwd = "888888";
	}
	else {
		users[id] = User(name, "888888");
	}
	
}

int main() {
	map<int, User> users;

	// 添加一些初始用户
	users[1] = User("张三", "123456");
	users[2] = User("李四", "abcdef");
	users[3] = User("王五", "password");
	printAllUsers(users);
	findUser(users, 2, "李四");
	printAllUsers(users);

	return 0;
}