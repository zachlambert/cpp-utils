#pragma once

namespace cpp_utils {

inline bool flag_or(bool& flag, bool condition) {
    flag |= condition;
    return condition;
}

inline bool flag_and(bool& flag, bool condition) {
    flag &= condition;
    return condition;
}

} // namespace cpp_utils
