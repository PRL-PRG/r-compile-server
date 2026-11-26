# `.Internal`s whose C function selects the operation by `PRIMVAL(op)` (`do_math2`, `do_tolower`,
# `do_pmin`, `do_gsub`, `do_paste`, `do_first_min`, `do_colsum`): called as builtins, not closures.
n <- 5
m <- 2
list(choose(n, m), beta(n, m), lchoose(n, m), toupper("ab"), pmax(n, m), gsub("a", "b", "aa"),
     paste0("x", n), which.max(c(n, m)), rowSums(matrix(1:4, 2)), cbind(n, m))
