#ifndef VIPRA_DIMENSIONS_HPP
#define VIPRA_DIMENSIONS_HPP

#include <cmath>
#include <stdexcept>
#include <type_traits>
#include <vector>
namespace VIPRA {

struct f2d {
  float x, y;

  ~f2d() = default;
  constexpr explicit f2d() noexcept : x(0), y(0) {}
  constexpr explicit f2d(float X) noexcept : x(X), y(0) {}
  constexpr explicit f2d(float X, float Y) noexcept : x(X), y(Y) {}
  constexpr f2d(const f2d& other) noexcept : x(other.x), y(other.y) {}
  constexpr f2d(f2d&& other) noexcept : x(other.x), y(other.y) {}
  constexpr f2d& operator=(const f2d& other) noexcept {
    x = other.x;
    y = other.y;
    return *this;
  }
  constexpr f2d& operator=(f2d&& other) noexcept {
    x = other.x;
    y = other.y;
    return *this;
  }

  template <typename T,
            class = typename std::enable_if<std::is_integral<T>::value || std::is_unsigned<T>::value>::type>
  inline constexpr float& operator[](T index) {
    switch (index) {
      case 0:
        return x;
      case 1:
        return y;
      case 'x':
        return x;
      case 'y':
        return y;
      default:
        throw std::out_of_range("Attempt to access invalid index on VIPRA::f2d");
    }
  }

  template <typename T,
            class = typename std::enable_if<std::is_integral<T>::value || std::is_unsigned<T>::value>::type>
  inline constexpr float operator[](T index) const {
    switch (index) {
      case 0:
        return x;
      case 1:
        return y;
      case 'x':
        return x;
      case 'y':
        return y;
      default:
        throw std::out_of_range("Attempt to access invalid index on VIPRA::f2d");
    }
  }
  template <typename T, class = typename std::enable_if<std::is_arithmetic<T>::value>::type>
  inline constexpr f2d& operator*=(const T& multiplier) noexcept {
    x *= multiplier;
    y *= multiplier;
    return *this;
  }

  template <typename T, class = typename std::enable_if<std::is_arithmetic<T>::value>::type>
  inline constexpr f2d operator*(T multiplier) const noexcept {
    return f2d{x, y} *= multiplier;
  }

  template <typename T, class = typename std::enable_if<std::is_arithmetic<T>::value>::type>
  inline constexpr f2d operator/(T multiplier) const noexcept {
    return f2d{x, y} /= multiplier;
  }

  template <typename T, class = typename std::enable_if<std::is_arithmetic<T>::value>::type>
  inline constexpr f2d& operator/=(const T& multiplier) noexcept {
    x /= multiplier;
    y /= multiplier;
    return *this;
  }

  inline f2d operator+(const f2d& other) const noexcept { return f2d{x + other.x, y + other.y}; }

  inline constexpr f2d& operator+=(const f2d& other) noexcept {
    x += other.x;
    y += other.y;
    return *this;
  }

  inline constexpr f2d& operator-=(const f2d& other) noexcept {
    x -= other.x;
    y -= other.y;
    return *this;
  }

  inline constexpr float distanceTo(const f2d& other) const {
    const float dX = other.x - x;
    const float dY = other.y - y;

    return sqrt((dX * dX) + (dY * dY));
  }

  inline constexpr bool operator==(const f2d& other) const noexcept { return (x == other.x && y == other.y); }
  inline constexpr bool operator==(f2d&& other) const noexcept { return (x == other.x && y == other.y); }
  inline constexpr bool operator!=(const f2d& other) const noexcept { return (x != other.x || y != other.y); }
  inline constexpr bool operator!=(f2d&& other) const noexcept { return (x != other.x || y != other.y); }
};

struct f3d {
  float x, y, z;

  ~f3d() = default;
  constexpr explicit f3d() noexcept : x(0), y(0), z(0) {}
  constexpr explicit f3d(float X) noexcept : x(X), y(0), z(0) {}
  constexpr explicit f3d(float X, float Y) noexcept : x(X), y(Y), z(0) {}
  constexpr explicit f3d(float X, float Y, float Z) noexcept : x(X), y(Y), z(Z) {}
  constexpr f3d(const f3d& other) noexcept : x(other.x), y(other.y), z(other.z) {}
  constexpr f3d(f3d&& other) noexcept : x(other.x), y(other.y), z(other.z) {}
  constexpr f3d(const f2d& other) noexcept : x(other.x), y(other.y), z(0) {}
  constexpr f3d(f2d&& other) noexcept : x(other.x), y(other.y), z(0) {}

  constexpr f3d& operator=(const f3d& other) noexcept {
    x = other.x;
    y = other.y;
    z = other.z;
    return *this;
  }
  constexpr f3d& operator=(f3d&& other) noexcept {
    x = other.x;
    y = other.y;
    z = other.z;
    return *this;
  }
  constexpr f3d& operator=(const f2d& other) noexcept {
    x = other.x;
    y = other.y;
    z = 0;
    return *this;
  }
  constexpr f3d& operator=(f2d&& other) noexcept {
    x = other.x;
    y = other.y;
    z = 0;
    return *this;
  }

  template <typename T,
            class = typename std::enable_if<std::is_integral<T>::value || std::is_unsigned<T>::value>::type>
  inline constexpr float& operator[](T index) {
    switch (index) {
      case 0:
        return x;
      case 1:
        return y;
      case 2:
        return z;
      case 'x':
        return x;
      case 'y':
        return y;
      case 'z':
        return z;
      default:
        throw std::out_of_range("Attempt to access invalid index on VIPRA::f3d");
    }
  }

  template <typename T,
            class = typename std::enable_if<std::is_integral<T>::value || std::is_unsigned<T>::value>::type>
  inline constexpr float operator[](T index) const {
    switch (index) {
      case 0:
        return x;
      case 1:
        return y;
      case 2:
        return z;
      case 'x':
        return x;
      case 'y':
        return y;
      case 'z':
        return z;
      default:
        throw std::out_of_range("Attempt to access invalid index on VIPRA::f3d");
    }
  }

  template <typename T, class = typename std::enable_if<std::is_arithmetic<T>::value>::type>
  inline constexpr f3d operator*(T multiplier) const noexcept {
    return f3d{x, y, z} *= multiplier;
  }
  template <typename T, class = typename std::enable_if<std::is_arithmetic<T>::value>::type>
  inline constexpr f3d& operator*=(const T& multiplier) noexcept {
    x *= multiplier;
    y *= multiplier;
    z *= multiplier;
    return *this;
  }

  template <typename T, class = typename std::enable_if<std::is_arithmetic<T>::value>::type>
  inline constexpr f3d operator/(T multiplier) const noexcept {
    return f3d{x, y, z} /= multiplier;
  }
  template <typename T, class = typename std::enable_if<std::is_arithmetic<T>::value>::type>
  inline constexpr f3d& operator/=(const T& multiplier) noexcept {
    x /= multiplier;
    y /= multiplier;
    z /= multiplier;
    return *this;
  }

  inline f3d operator-(const f2d& other) const noexcept { return f3d{x - other.x, y - other.y, z}; }
  inline f3d operator-(const f3d& other) const noexcept { return f3d{x - other.x, y - other.y, z - other.z}; }
  inline f3d operator-(f3d&& other) const noexcept { return f3d{x - other.x, y - other.y, z - other.z}; }

  inline f3d operator+(const f2d& other) const noexcept { return f3d{x + other.x, y + other.y, z}; }
  inline f3d operator+(const f3d& other) const noexcept { return f3d{x + other.x, y + other.y, z + other.z}; }
  inline f3d operator+(f3d&& other) const noexcept { return f3d{x + other.x, y + other.y, z + other.z}; }

  inline constexpr f3d& operator+=(const f3d& other) noexcept {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
  }
  inline constexpr f3d& operator+=(f3d&& other) noexcept {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
  }

  inline constexpr f3d& operator-=(const f3d& other) noexcept {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
  }
  inline constexpr f3d& operator-=(f3d&& other) noexcept {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
  }

  inline constexpr float distanceTo(const f2d& other) const {
    const float dX = other.x - x;
    const float dY = other.y - y;
    const float dZ = 0 - z;

    return sqrt((dX * dX) + (dY * dY) + (dZ * dZ));
  }

  inline constexpr float distanceTo(const f3d& other) const {
    const float dX = other.x - x;
    const float dY = other.y - y;
    const float dZ = other.z - z;

    return sqrt((dX * dX) + (dY * dY) + (dZ * dZ));
  }

  inline constexpr bool operator==(const f3d& other) const noexcept {
    return (x == other.x && y == other.y && z == other.z);
  }
  inline constexpr bool operator==(f3d&& other) const noexcept {
    return (x == other.x && y == other.y && z == other.z);
  }
  inline constexpr bool operator!=(const f3d& other) const noexcept {
    return (x != other.x || y != other.y || z != other.z);
  }
  inline constexpr bool operator!=(f3d&& other) const noexcept {
    return (x != other.x || y != other.y || z != other.z);
  }

  inline constexpr f3d unit() const {
    const float mag = sqrt((x * x) + (y * y) + (z * z));
    return VIPRA::f3d{x, y, z} / mag;
  }
};

typedef std::vector<f2d> f2dVec;
typedef std::vector<f3d> f3dVec;

static f2d __emptyf2d__;
static f3d __emptyf3d__;

}  // namespace VIPRA

#endif