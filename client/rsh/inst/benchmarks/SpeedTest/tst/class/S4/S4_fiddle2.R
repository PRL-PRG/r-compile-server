fiddle2 <- function (x) standardGeneric("fiddle2")

execute <- function(size=1000L){
  setClass ("bert",representation(x="integer",a="complex"),
                  prototype(x=c(30L,1:999),a=0+0i))
  setClass ("gwen",representation(x="integer",a="complex"),
                  prototype(x=c(30L,40L),a=0+0i))

  setMethod ("fiddle2", "bert", 
            function(x) { for (i in 1:100) x@a <- x@a-7; x@a })
  setMethod ("fiddle2", "gwen", 
            function(x) { for (i in 1:100) x@x[2] <- x@x[2]+7L; x@x })

  z <- new("bert")
  z@a <- 2+5i

  w <- new("gwen")
  w@a <- 2+5i

  f <- function (n,x) { for (i in 1:n) r <- fiddle2(x); r }

  r1 <- f((size*3),z)
  r2 <- f(size,w)

  list(r1,sum(r2))
}