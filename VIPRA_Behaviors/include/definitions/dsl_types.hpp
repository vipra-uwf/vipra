#ifndef VIPRA_DSL_TYPES_HPP
#define VIPRA_DSL_TYPES_HPP

#include <cstdint>
#include <utility>

#include "definitions/type_definitions.hpp"

namespace BHVR {
/**
  * @brief Seed for randomization
  * 
  */
enum seed : uint64_t;

/**
 * @brief Unique identifier for a pedestrian/environment state
 * 
 */
enum stateUID : uint64_t;

constexpr inline auto operator++(seed& val) noexcept -> seed& {
  return val = static_cast<seed>(static_cast<uint64_t>(val) + 1);
}

constexpr inline auto operator++(seed& val, int) noexcept -> seed {
  seed tmp{val};
  ++val;
  return tmp;
}

constexpr inline auto operator++(stateUID& val) noexcept -> stateUID& {
  return val = static_cast<stateUID>(static_cast<uint64_t>(val) + 1);
}

constexpr inline auto operator++(stateUID& val, int) noexcept -> stateUID {
  stateUID tmp{val};
  ++val;
  return tmp;
}

}  // namespace BHVR

#endif