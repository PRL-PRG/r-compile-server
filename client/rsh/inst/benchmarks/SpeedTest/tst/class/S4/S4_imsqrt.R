imsqrt <- function (x) standardGeneric("imsqrt")

execute <- function(size=100000L){
  setClass ("bert",representation(x="integer",a="complex"),
                  prototype(x=c(30L,1:999),a=0+0i))
  setClass ("gwen",representation(x="integer",a="complex"),
                  prototype(x=c(30L,40L),a=0+0i))

  setMethod ("imsqrt", "bert", function(x) sqrt(Im(x@a)))
  setMethod ("imsqrt", "gwen", function(x) sqrt(Re(x@a)+Im(x@a)))

  z <- new("bert")
  z@a <- 2+5i

  w <- new("gwen")
  w@a <- 2+5i

  for (i in 1:size) r <- 100*imsqrt(w) + imsqrt(z);
  return(r)
}