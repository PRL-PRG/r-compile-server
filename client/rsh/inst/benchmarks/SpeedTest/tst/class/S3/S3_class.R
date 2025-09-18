execute <- function(size=300000L){
  a <- 5; class(a) <- "fred"
  b <- 7; class(b) <- "mary"

  addzeroc <- function (x) UseMethod("addzeroc")

  addzeroc.fred <- function (x) { r <- c(x,0); class(r) <- "fred"; r }
  addzeroc.mary <- function (x) { r <- c(0,x); class(r) <- "mary"; r }

  for (i in 1:size) r <- list(addzeroc(a),addzeroc(b))
  return(r)
}