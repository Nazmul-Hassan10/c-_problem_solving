
//------------------------solved but not efficient----------------------------------
// #include <iostream>
// using namespace std;

// int main() {
//     int k, s;
//     cin >> k >> s;
//     int cnt = 0;
//     for (int x = 0; x <= k; x++)
//     {
//         for (int y = 0; y <= k; y++)
//         {
//             for (int z = 0; z <= k; z++)
//             {
//                 if (x + y + z == s)
//                 {
//                     cnt++;
//                 }
                
//             }
            
//         }
        
//     }
//     cout << cnt << endl;

//     return 0;
// }


//------------------------efficient----------------------------------
// #include <iostream>
// using namespace std;

// int main() {
//     int k, s;
//     cin >> k >> s;
//     int cnt = 0;
//     for (int x = 0; x <= k; x++)
//     {
//         for (int y = 0; y <= k; y++)
//         {
//             int z = s - x - y;
//             if (z >= 0 && z <= k)
//             {
//                 cnt++;
//             }
            
//         }
        
//     }
//     cout << cnt << endl;

//     return 0;
// }


//------------------------more efficient----------------------------------
#include <iostream>
using namespace std;

int main() {
    int k, s;
    cin >> k >> s;
    int cnt = 0;

    for (int x = 0; x <= min(k, s); x++) {
        for (int y = 0; y <= min(k, s - x); y++) {
            int z = s - x - y;
            if (z >= 0 && z <= k) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
