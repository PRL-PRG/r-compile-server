fiddle <- function (x) standardGeneric("fiddle")

execute <- function(size=10000L){
  setClass ("bert",representation(x="integer",a="complex"),
                  prototype(x=c(30L,1:999),a=0+0i))
  setClass ("gwen",representation(x="integer",a="complex"),
                  prototype(x=c(30L,40L),a=0+0i))

  setMethod ("fiddle", "bert", function(x) new("gwen",a=x@a+1))
  setMethod ("fiddle", "gwen", function(x) new("bert",a=x@a-1i))

  z <- new("bert")
  z@a <- 2+5i

  w <- new("gwen")
  w@a <- 2+5i

  f <- function (n,q) {for (i in 1:n) q <- fiddle(q); q}

  r1 <- f(size,z)
  r2 <- f(size,w)

  list(r1,r2)
}