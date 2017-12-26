L2-005. 集合相似度
给定两个整数集合，它们的相似度定义为：Nc/Nt*100%。其中Nc是两个集合都有的不相等整数的个数，Nt是两个集合一共有的不相等整数的个数。你的任务就是计算任意一对给定集合的相似度。

输入格式：

输入第一行给出一个正整数N（<=50），是集合的个数。随后N行，每行对应一个集合。每个集合首先给出一个正整数M（<=104），是集合中元素的个数；然后跟M个[0, 109]区间内的整数。

之后一行给出一个正整数K（<=2000），随后K行，每行对应一对需要计算相似度的集合的编号（集合从1到N编号）。数字间以空格分隔。

输出格式：

对每一对需要计算的集合，在一行中输出它们的相似度，为保留小数点后2位的百分比数字。

输入样例：
3
3 99 87 101
4 87 101 5 87
7 99 101 18 5 135 18 99
2
1 2
1 3
输出样例：
50.00%
33.33%

题目大意：nc是两个集合的公共元素个数，nt是两个集合的所有包含的元素个数（其中元素个数表示各个元素之间互不相同）。

分析：因为给出的集合里面含有重复的元素，而计算nc和nt不需要考虑两个集合里面是否分别有重复的元素，所以可以直接使用set存储每一个集合，然后把set放进一个数组里面存储。当需要计算集合a和集合b的相似度nc和nt的时候，遍历集合a中的每一个元素，寻找集合b中是否有该元素，如果有，说明是两个人公共的集合元素，则nc++，否则nt++（nt的初值为b集合里面本有的元素）。

#include <set>
#include <vector>
#include <cstdio>
using namespace std;
int main() {
    int n, m, k, temp, a, b;
    scanf("%d", &n);
    vector<set<int>> v(n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &m);
        set<int> s;
        for(int j = 0; j < m; j++) {
            scanf("%d", &temp);
            s.insert(temp);
        }
        v[i] = s;
    }
    scanf("%d", &k);
    for(int i = 0; i < k; i++) {
        scanf("%d %d", &a, &b);
        int nc = 0, nt = v[b-1].size();
        for(auto it = v[a-1].begin(); it != v[a-1].end(); it++) {
            if(v[b-1].find(*it) == v[b-1].end()) {
                nt++;
            } else {
                nc++;
            }
        }
        double ans = (double)nc / nt * 100;
        printf("%.2f%%\n", ans);
    }
    return 0;
}