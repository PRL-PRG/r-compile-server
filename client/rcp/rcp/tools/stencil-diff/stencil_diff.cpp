// stencil_diff.cpp
// Compares stencil body sizes between two versions of stencils_data.c and
// reports changes sorted from best (size decreased most) to worst.
//
// Usage: stencil_diff <old_file> <new_file>
//   If <old_file> does not exist, exits silently (new installation).

#include <algorithm>
#include <charconv>
#include <format>
#include <fstream>
#include <iostream>
#include <optional>
#include <string>
#include <string_view>
#include <unordered_map>
#include <utility>
#include <vector>

using StencilMap = std::unordered_map<std::string, size_t>;

// Parse all lines of the form:
//   uint8_t _SOME_BODY[123] = { ...
// Returns nullopt if the file cannot be opened.
static std::optional<StencilMap> parse_file(const char *path) {
    std::ifstream file(path);
    if (!file.is_open())
        return std::nullopt;

    StencilMap result;
    constexpr std::string_view prefix      = "uint8_t ";
    constexpr std::string_view body_suffix = "_BODY";

    std::string line;
    while (std::getline(file, line)) {
        const std::string_view sv(line);

        if (!sv.starts_with(prefix))
            continue;

        // Name occupies [prefix.size(), bracket).
        const auto bracket = sv.find('[', prefix.size());
        if (bracket == std::string_view::npos)
            continue;

        const std::string_view name = sv.substr(prefix.size(), bracket - prefix.size());
        if (!name.ends_with(body_suffix))
            continue;

        // Parse the size between '[' and ']' without allocating.
        size_t size = 0;
        const char *num_start = line.data() + bracket + 1;
        const char *num_end   = line.data() + line.size();
        auto [ptr, ec] = std::from_chars(num_start, num_end, size);
        if (ec != std::errc{} || *ptr != ']')
            continue;

        result.emplace(name, size);
    }
    return result;
}

// Number of decimal digits in a non-negative value.
static int count_digits(long v) {
    int d = 1;
    while (v >= 10) { v /= 10; ++d; }
    return d;
}

// Strip exactly one leading '_' and the trailing "_BODY" suffix.
// e.g.  _RETURN_OP__BODY    ->  RETURN_OP_
//       _STEPFOR_OP_00_BODY ->  STEPFOR_OP_00
//       __RCP_EXIT_HOOK_BODY -> _RCP_EXIT_HOOK
static std::string_view trim_name(std::string_view sv) {
    if (!sv.empty() && sv.front() == '_')
        sv.remove_prefix(1);
    constexpr std::string_view suffix = "_BODY";
    if (sv.ends_with(suffix))
        sv.remove_suffix(suffix.size());
    return sv;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: stencil_diff <old_file> <new_file>\n";
        return 1;
    }

    // nullopt means the file doesn't exist — treat as a fresh build.
    auto old_opt = parse_file(argv[1]);
    if (!old_opt)
        return 0;
    auto new_opt = parse_file(argv[2]);
    if (!new_opt)
        return 0;

    const StencilMap &old_data = *old_opt;
    const StencilMap &new_data = *new_opt;

    struct Entry {
        std::string_view display_name; // trimmed; points into map key — no copy
        long old_size;
        long new_size;
        long delta; // new_size - old_size
    };

    std::vector<Entry>                               changed;
    std::vector<std::pair<std::string_view, size_t>> added;   // only in new file
    std::vector<std::pair<std::string_view, size_t>> removed; // only in old file
    long cumulative = 0; // net byte change across all stencils

    for (auto &[name, new_sz] : new_data) {
        if (auto it = old_data.find(name); it == old_data.end()) {
            added.emplace_back(trim_name(name), new_sz);
            cumulative += static_cast<long>(new_sz);
        } else {
            long delta = static_cast<long>(new_sz) - static_cast<long>(it->second);
            cumulative += delta;
            if (delta != 0)
                changed.push_back({trim_name(name),
                                   static_cast<long>(it->second),
                                   static_cast<long>(new_sz), delta});
        }
    }

    for (auto &[name, old_sz] : old_data) {
        if (!new_data.contains(name)) {
            removed.emplace_back(trim_name(name), old_sz);
            cumulative -= static_cast<long>(old_sz);
        }
    }

    if (changed.empty() && added.empty() && removed.empty())
        return 0;

    // Sort changed: most improved (most negative delta) first.
    std::sort(changed.begin(), changed.end(),
              [](const Entry &a, const Entry &b) { return a.delta < b.delta; });
    std::sort(added.begin(), added.end(),
              [](const auto &a, const auto &b) { return a.first < b.first; });
    std::sort(removed.begin(), removed.end(),
              [](const auto &a, const auto &b) { return a.first < b.first; });

    // ------------------------------------------------------------------ widths
    int w_name = 4, w_size = 1;
    for (auto &e : changed) {
        w_name = std::max(w_name, static_cast<int>(e.display_name.size()));
        w_size = std::max(w_size, count_digits(e.old_size));
        w_size = std::max(w_size, count_digits(e.new_size));
    }
    for (auto &[n, sz] : added) {
        w_name = std::max(w_name, static_cast<int>(n.size()));
        w_size = std::max(w_size, count_digits(static_cast<long>(sz)));
    }
    for (auto &[n, sz] : removed) {
        w_name = std::max(w_name, static_cast<int>(n.size()));
        w_size = std::max(w_size, count_digits(static_cast<long>(sz)));
    }
    w_name += 2; // padding between name and size columns

    // ------------------------------------------------------------------ output
    std::cout << "\n=== Stencil Size Changes ===\n\n";

    for (auto &e : changed) {
        double pct = 100.0 * static_cast<double>(e.delta) /
                     static_cast<double>(e.old_size);
        std::cout << std::format("  {:<{}}  {:>{}} -> {:>{}}   ({:+} bytes, {:+.1f}%)\n",
                                 e.display_name, w_name,
                                 e.old_size, w_size,
                                 e.new_size, w_size,
                                 e.delta, pct);
    }

    if (!added.empty()) {
        if (!changed.empty())
            std::cout << '\n';
        for (auto &[n, sz] : added)
            std::cout << std::format("  {:<{}}  {:>{}}   [new]\n",
                                     n, w_name, sz, w_size);
    }

    if (!removed.empty()) {
        if (!changed.empty() || !added.empty())
            std::cout << '\n';
        for (auto &[n, sz] : removed)
            std::cout << std::format("  {:<{}}  {:>{}}   [removed]\n",
                                     n, w_name, sz, w_size);
    }

    // ------------------------------------------------------------------ stats
    std::cout << '\n';

    std::cout << std::format("  Summary: {} changed", changed.size());
    if (!added.empty())   std::cout << std::format(", {} added",   added.size());
    if (!removed.empty()) std::cout << std::format(", {} removed", removed.size());
    std::cout << '\n';

    if (!changed.empty()) {
        // Average over changed stencils.
        double avg = 0.0;
        for (auto &e : changed)
            avg += static_cast<double>(e.delta);
        avg /= static_cast<double>(changed.size());

        // Median — changed is already sorted by delta, no extra copy needed.
        const size_t n = changed.size();
        const double median = (n % 2 == 0)
            ? (changed[n / 2 - 1].delta + changed[n / 2].delta) / 2.0
            : static_cast<double>(changed[n / 2].delta);

        std::cout << std::format("  Average change:    {:+.1f} bytes\n", avg);
        std::cout << std::format("  Median change:     {:+.1f} bytes\n", median);
    }

    // Cumulative = net change across every stencil in either file.
    std::cout << std::format("  Cumulative change: {:+} bytes\n\n", cumulative);

    return 0;
}
