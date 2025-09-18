execute <- function(size = 1000000L) {
  a <- 9
  attributes(a) <- list(dd=1.4, cc=1.3, bb=1.2, aa=1.1)
  for (i in 1:size) { b <- a; attr(b,"bb") <- "x"}
  return(b)
}