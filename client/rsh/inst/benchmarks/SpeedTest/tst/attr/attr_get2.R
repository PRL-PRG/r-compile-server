execute <- function(size = 2000000L) {
  a <- 9
  attributes(a) <- list(dd=1.4, cc=1.3, bb=1.2, aa=1.1)
  r <- NULL
  for (i in 1:size) r <- attr(a, "b")
  r
}