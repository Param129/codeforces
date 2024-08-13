template <int D, typename T>
// struct Vec : public vector<Vec<D-1, T>> {
//     static_assert(D >= 1, "Dimension must be positive");

//     template <typename... Args>
//     Vec(int n = 0, Args... args) : vector<Vec<D-1, T>>(n, Vec<D-1, T>(args...)) {}
// };

// template <typename T>
// struct Vec<1, T> : public vector<T> {
//     Vec(int n = 0, T val = T()) : std::vector<T>(n, val) {}
// };

// template <class Fun>
// class y_combinator_result {
//     Fun fun;

// public:
//     template <class T>
//     explicit y_combinator_result(T&& fun) : fun_(std::forward<T>(fun)) {}

//     template <class... Args>
//     decltype(auto) operator()(Args&&... args) {
//         return fun_(std::ref(*this), std::forward<Args>(args)...);
//     }
// };

// template <class Fun>
// decltype(auto) y_combinator(Fun&& fun) {
//     return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun));
// }