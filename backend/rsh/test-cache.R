g <- function() {
  s <- get("s", envir=parent.frame(1))
  assign("s", s + 100, envir=parent.frame(1))
}

f <- function (n) {
    s <- 0
    i <- 0
    while (i < n) {
        s <- s + i
        i <- i + 1
    }
    g()
    s
}

fc <- compiler:::cmpfun(f, options=list(optimize=3L))

print(f(2))
print(fc(2))
