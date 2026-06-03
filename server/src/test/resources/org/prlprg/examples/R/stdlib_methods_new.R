#? stdlib
`new` <- function (Class, ...) 
{
    ClassDef <- getClass(Class, where = topenv(parent.frame()))
    value <- .Call(C_new_object, ClassDef)
    initialize(value, ...)
}

# Examples
## using the definition of class "track" from \link{setClass}


setClass("track", slots = c(x="numeric", y="numeric"))
setClass("trackCurve", contains = "track",
          slots = c(smooth = "numeric"))

ydata <- stats::rnorm(10); ysmooth <- 1:10


## a new object with two slots specified
t1 <- new("track", x = seq_along(ydata), y = ydata)

# a new object including an object from a superclass, plus a slot
t2 <- new("trackCurve", t1, smooth = ysmooth)

### define a method for initialize, to ensure that new objects have
### equal-length x and y slots.  In this version, the slots must still be
### supplied by name.

setMethod("initialize", "track", 
    function(.Object, ...) {
      .Object <- callNextMethod()
      if(length(.Object@x) != length(.Object@y))
      stop("specified x and y of different lengths")
      .Object
    })

### An alternative version that allows x and y to be supplied
### unnamed.  A still more friendly version would make the default x
### a vector of the same length as y, and vice versa.

setMethod("initialize", "track",
          function(.Object, x = numeric(0), y = numeric(0), ...) {
              .Object <- callNextMethod(.Object, ...)
              if(length(x) != length(y))
                  stop("specified x and y of different lengths")
              .Object@x <- x
              .Object@y <- y
              .Object
          })


removeMethod("initialize", "track")


