execute <- function(size=500000L){
  a <- 5; class(a) <- "fred"

  seq.fred <- function (x,y) c(x,0,y)

  for (i in 1:size) r <- seq(a,9)
  return(r)
}