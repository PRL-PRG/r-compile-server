#? gcTorture
# Subscripts that the runtime sends to the default method of `[`, `[[`, `[<-` and `[[<-` when the
# target is not an object, and targets with S3 methods, which must still dispatch.
`[.wrap` <- function(x, i) structure(list(unclass(x)[[i]] * 10), class = "wrap")
`[[<-.wrap` <- function(x, i, value) {
  y <- unclass(x)
  y[[i]] <- value + 100
  structure(y, class = "wrap")
}
read <- function(x, m, l) {
  list(
    x[2:3],
    x[[2]],
    m[1, , drop = FALSE],
    m[2, 2],
    l[["al", exact = FALSE]],
    l[["b"]],
    l$b
  )
}
write <- function(x, m, l, w) {
  x[2] <- 7
  x[[3]] <- 8L
  m[2, 1] <- 9
  m[[1, 2]] <- 10
  l[["b"]] <- "new"
  l$c <- NULL
  w[[1]] <- 5
  list(x, m, l, w, w[2])
}

for (k in 1:20) {
  r <- list(
    read(c(1L, 2L, 3L), matrix(1:4, 2), list(alpha = 1, b = 2, c = 3)),
    write(c(1, 2, 3), matrix(0, 2, 2), list(a = 1, b = 2, c = 3),
          structure(list(1, 2), class = "wrap"))
  )
}
r
