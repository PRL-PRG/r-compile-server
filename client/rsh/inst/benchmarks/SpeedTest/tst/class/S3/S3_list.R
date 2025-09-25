execute <- function(size=1000000L){
  s <- list(q=101); class(s) <- "bert"

  for (i in 1:size) r <- s$q
  return(r)
}
