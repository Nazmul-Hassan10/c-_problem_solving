// একটি পূর্ণসংখ্যা দেওয়া থাকবে, সেটি জোড় না বিজোড় তা বের করতে হবে।

// ইনপুট
// প্রথম লাইনে একটি সংখ্যা T (1 ≤ T ≤ 100) দেওয়া থাকবে। পরবর্তীতে T-এর মান যত, ততটি লাইন থাকবে। প্রতিটি লাইনে একটি করে পূর্ণসংখ্যা N দেওয়া থাকবে। একটি সংখ্যায় সর্বোচ্চ 100টি অঙ্ক (digit) থাকতে পারে।

// আউটপুট
// প্রতিটি পূর্ণসংখ্যার জন্য, সংখ্যাটি জোড় হলে even, আর বিজোড় হলে odd কথাটি প্রিন্ট করতে হবে।

// **Number can be upto 100**

#include<iostream>
#include <string.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    char s[105];
    cin >> s;
    int len = strlen(s);
    int last_digit = s[len - 1] - '0';
    if (last_digit % 2 == 0) {
      cout << "even\n";
    }
    else {
      cout << "odd\n";
    }
  }
}