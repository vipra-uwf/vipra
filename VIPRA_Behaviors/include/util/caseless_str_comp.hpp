#ifndef VIPRA_BHVR_CASELESS_STR_COMP_HPP
#define VIPRA_BHVR_CASELESS_STR_COMP_HPP

#include <cstring>
#include <string>

/**
 * @brief Struct for caseless look up in a std::map
 * 
 */
struct CaselessStrCompare {
  struct Comp {
    auto operator()(const std::string& str1, const std::string& str2) const -> bool {
      const size_t cnt = str1.size();
      if (cnt != str2.size()) {
        return false;
      }

      for (size_t i = 0; i < cnt; ++i) {
        if (str1[i] == str2[i]) {
          continue;
        }

        if (str1[i] > str2[i]) {
          if (str1[i] - SPACE_ASCII != str2[i]) {
            return false;
          }
        } else {
          if (str2[i] - SPACE_ASCII != str1[i]) {
            return false;
          }
        }
      }
      return true;
    }
  };
  struct Hash {
    auto operator()(const std::string& str) const -> size_t {
      std::string temp{str};
      for (char& chr : temp) {
        chr = static_cast<char>(std::tolower(chr));
      }
      return std::hash<std::string>{}(temp);
    }
  };

 private:
  static constexpr char SPACE_ASCII = 32;
};

#endif