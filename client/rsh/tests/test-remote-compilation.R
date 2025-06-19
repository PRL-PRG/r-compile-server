f <- function() {
  42
}

rsh::rsh_compile(f)
stopifnot(rsh::is_compiled(f))
stopifnot(f() == 42)


f <- function(x) {
    y <- sum(x, na.rm=TRUE)
    z <- c(1., 4., 8.)
    attr(y, "attr") <- list(a=1, b="opt")
    x + z * y
}
