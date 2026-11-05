f <- function(i, x, y, v) {
  c(
    x %% y, -x %% y, x %% -y, x %% 0, x %% Inf, -x %% Inf, NA_real_ %% y, NaN %% y,
    i %% y, x %% i, v %% y, v %% c(y, -y, y),
    max(x), max(i, x), max(v, x), max(x, NA, NaN), max(x, NaN), max(x, NaN, NA_integer_)
  )
}

f(7L, 5.5, 2, c(-4L, 1L, 9L))
