#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    sort(nums.begin(), nums.end()); //  Bước đầu phải sort theo thứ tự tăng dân
    vector<vector<int>> res; // tạo ra một vector lớn để chứa 
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] > 0) { 
        break;
      }
      if (i > 0 && nums[i] == nums[i - 1]) { // Lọc i trùng lặp tránh bộ ba trùng nhau
        continue;
      }
      int l = i + 1; 
      int r = nums.size() - 1;
      while (l < r) {
        int sum = nums[i] + nums[l] + nums[r];
        if (sum < 0) {
          l++;
        } else if (sum > 0) {
          r--;
        } else {
          res.push_back({nums[i], nums[l], nums[r]});
          l++;
          r--;
          while (l < r && nums[l] == nums[l - 1]) { // Lọc l trùng lặp tránh bộ ba trùng nhau
            l++;
          }
        }
      }
    }
    return res;
  }
};
int main() {
  Solution solution;
  vector<int> nums = {2, -2, 4, 0, 1, -3, 3, -1};
  // 1.Hứng kết quả về một biến
  vector<vector<int>> results = solution.threeSum(nums);
  // 2.Dùng 2 vòng lặp lồng nhau để in
  cout << "Các bộ ba tìm được: " << endl;
  // Vòng lặp bên ngoài (lặp qua các "hộp nhỏ")
  for (const vector<int> &triplet : results) {
    cout << "[";
    // Vòng lặp bên trong (lặp qua từng số trong "hộp nhỏ")
    for (int num : triplet) {
      cout << num << " ";
    }
    cout << "]" << endl;
  }

  return 0;
}