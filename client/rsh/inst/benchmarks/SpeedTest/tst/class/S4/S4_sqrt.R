execute <- function(size=2000000L){
  setClass ("bert",representation(x="integer",a="complex"),
                   prototype(x=c(30L,1:999),a=0+0i))
  setMethod ("sqrt", "bert", function(x) sqrt(Re(x@a)))

  z <- new("bert")
  z@a <- 2+5i

  for (i in 1:size) r <- sqrt(z);
  return(r)
}