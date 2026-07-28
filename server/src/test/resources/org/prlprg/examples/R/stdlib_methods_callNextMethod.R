#? stdlib
`callNextMethod` <- function (...) 
{
    method <- nextMethod <- NULL
    dotNextMethod <- as.name(".nextMethod")
    parent <- sys.parent(1)
    methodFun <- maybeMethod <- sys.function(parent)
    if (is(maybeMethod, "MethodDefinition")) {
        callEnv <- methodEnv <- parent.frame(1)
        mcall <- sys.call(parent)
        dotsenv <- parent.frame(2)
        i <- 1L
    }
    else {
        callEnv <- parent.frame(1)
        methodEnv <- parent.frame(2)
        mcall <- sys.call(sys.parent(2))
        dotsenv <- parent.frame(3)
        maybeMethod <- sys.function(sys.parent(2))
        i <- 2L
    }
    if (!is.null(method <- methodEnv$.Method)) {
        nextMethod <- callEnv$.nextMethod
        f <- methodEnv$.Generic
    }
    else if (identical(mcall[[1L]], dotNextMethod)) {
        nextMethodEnv <- parent.frame(i + 1L)
        nextMethod <- nextMethodEnv$.nextMethod
        f <- nextMethodEnv$.Generic
    }
    else if (is(maybeMethod, "MethodDefinition")) {
        f <- maybeMethod@generic
        method <- maybeMethod
    }
    else {
        if (is.primitive(mcall[[1L]])) {
            f <- .primname(mcall[[1L]])
        }
        else {
            f <- as.character(mcall[[1L]])
        }
        fdef <- genericForBasic(f)
        if (is.null(fdef)) 
            stop(gettextf("a call to callNextMethod() appears in a call to %s, but the call does not seem to come from either a generic function or another 'callNextMethod'", 
                sQuote(f)), domain = NA)
        f <- fdef@generic
        method <- maybeMethod
    }
    if (is(method, "MethodDefinition")) {
        if (is.null(nextMethod)) {
            if (!is(method, "MethodWithNext")) {
                method <- addNextMethod(method, f, envir = methodEnv)
                cacheMethod(f, method@target, method, fdef = getGeneric(f), 
                  inherited = TRUE)
            }
            nextMethod <- method@nextMethod
            assign(".nextMethod", nextMethod, envir = callEnv)
            assign(".Generic", f, envir = callEnv)
        }
    }
    else if (is.null(method)) {
        if (is.null(nextMethod)) 
            stop("call to 'callNextMethod' does not appear to be in a 'method' or 'callNextMethod' context")
        method <- nextMethod
        if (!is(method, "MethodWithNext")) {
            method <- addNextMethod(method, f, envir = methodEnv)
        }
        nextMethod <- method@nextMethod
        assign(".nextMethod", nextMethod, envir = callEnv)
        assign(".Generic", f, envir = callEnv)
        assign(".nextMethod", method, envir = nextMethodEnv)
        assign(".Generic", f, envir = nextMethodEnv)
    }
    else stop(gettextf("bad object found as method (class %s)", 
        dQuote(class(method))), domain = NA)
    if (is.null(nextMethod)) 
        stop("No next method available")
    subsetCase <- !is.na(match(f, .BasicSubsetFunctions))
    if (nargs() > 0) {
        call <- sys.call()
        call[[1L]] <- as.name(".nextMethod")
        eval(call, callEnv)
    }
    else {
        if (subsetCase) {
            call <- as.list(mcall)
            if ((f == "[") && length(names(call)) > 0) 
                call <- .doSubNextCall(call, method)
            else {
                fnames <- c("", formalArgs(method))
                i <- match("...", fnames)
                if (is.na(i) || i > length(call)) 
                  length(fnames) <- length(call)
                else {
                  i <- i - 1L
                  length(fnames) <- i
                  fnames <- c(fnames, rep("", length(call) - 
                    i))
                }
                if (endsWith(f, "<-")) 
                  fnames[length(fnames)] <- "value"
                names(call) <- fnames
                call <- as.call(call)
            }
        }
        else call <- match.call(methodFun, mcall, expand.dots = FALSE, 
            envir = dotsenv)
        .Call(C_R_nextMethodCall, call, callEnv)
    }
}

# Examples
## callNextMethod() used for the Math, Math2 group generic functions

## A class to automatically round numeric results to "d" digits

rnum <- setClass("rnum", slots = c(d = "integer"), contains = "numeric")

## Math functions operate on the rounded numbers, return a plain
## vector.  The next method will always be the default, usually a primitive.
setMethod("Math", "rnum",
          function(x)
              callNextMethod(round(as.numeric(x), x@d)))
setMethod("Math2", "rnum",
          function(x, digits)
              callNextMethod(round(as.numeric(x), x@d), digits))

## Examples of callNextMethod with two arguments in the signature.

## For arithmetic and one rnum with anything, callNextMethod with no arguments
## round the full accuracy result, and return as plain vector
setMethod("Arith", c(e1 ="rnum"),
          function(e1, e2)
              as.numeric(round(callNextMethod(), e1@d)))
setMethod("Arith", c(e2 ="rnum"),
          function(e1, e2)
              as.numeric(round(callNextMethod(), e2@d)))

## A method for BOTH arguments from "rnum" would be ambiguous
## for callNextMethod(): the two methods above are equally valid.
## The method chooses the smaller number of digits,
## and then calls the generic function, postponing the method selection
## until it's not ambiguous.
setMethod("Arith", c(e1 ="rnum", e2 = "rnum"),
          function(e1, e2) {
              if(e1@d <= e2@d)
                  callGeneric(e1, as.numeric(e2))
              else
                  callGeneric(as.numeric(e1), e2)
          })

## For comparisons, callNextMethod with the rounded arguments
setMethod("Compare", c(e1 = "rnum"),
          function(e1, e2)
              callNextMethod(round(e1, e1@d), round(e2, e1@d)))
setMethod("Compare", c(e2 = "rnum"),
          function(e1, e2)
              callNextMethod(round(e1, e2@d), round(e2, e2@d)))

## similarly to the Arith case, the method for two "rnum" objects
## can not unambiguously use callNextMethod().  Instead, we rely on
## The rnum() method inhertited from Math2 to return plain vectors.
setMethod("Compare", c(e1 ="rnum", e2 = "rnum"),
          function(e1, e2) {
              d <- min(e1@d, e2@d)
              callGeneric(round(e1, d), round(e2, d))
          })




set.seed(867)

x1 <- rnum(10*runif(5), d=1L)
x2 <- rnum(10*runif(5), d=2L)

x1+1
x2*2
x1-x2

## Simple examples to illustrate callNextMethod with and without arguments
B0 <- setClass("B0", slots = c(s0 = "numeric"))

## and a function to illustrate callNextMethod

f <- function(x, text = "default") {
    str(x) # print a summary
    paste(text, ":", class(x))
}

setGeneric("f")
setMethod("f", "B0", function(x, text = "B0") {
    cat("B0 method called with s0 =", x@s0, "\n")
    callNextMethod()
})

b0 <- B0(s0 = 1)

## call f() with 2 arguments: callNextMethod passes both to the default method
f(b0, "first test")

## call f() with 1 argument:  the default "B0" is not passed by callNextMethod
f(b0)

## Now, a class that extends B0, with no methods for f()
B1 <- setClass("B1", slots = c(s1 = "character"), contains = "B0")
b1 <- B1(s0 = 2, s1 = "Testing B1")

## the two cases work as before, by inheriting the "B0" method

f(b1, b1@s1)

f(b1)

B2 <- setClass("B2", contains = "B1")

## And, a method for "B2" that calls with explicit arguments.
## Note that the method selection in callNextMethod
## uses the class of the *argument* to consistently select the "B0" method

setMethod("f", "B2", function(x, text = "B1 method") {
    y <- B1(s0 = -x@s0, s1 ="Modified x")
    callNextMethod(y, text)
})

b2 <- B2(s1 = "Testing B2", s0 = 10)

f(b2, b2@s1)

f(b2)


## Be careful:  the argument passed must be legal for the method selected
## Although the argument here is numeric, it's still the "B0" method that's called
setMethod("f", "B2", function(x, text = "B1 method") {
    callNextMethod(x@s0, text)
})

##  Now the call will cause an error:

tryCatch(f(b2), error = function(e) cat(e$message,"\n"))



##$
removeClass("B2"); removeClass("B1"); removeClass("B0")

removeGeneric("f")

removeMethods(all=FALSE,"Arith"); removeMethods(all=FALSE,"Compare")
removeMethods(all=FALSE,"Math"); removeMethods(all=FALSE,"Math2")

## tests of multiple callNextMethod
setClass("m1", slots = c(count = "numeric"), contains = "matrix",
         prototype = prototype(count = 0))
mm1 <- new("m1", matrix(1:12, 3,4))
setMethod("[", "m1", function(x, i, j, ..., drop) callNextMethod())

setClass("m2", slots = c(sum = "numeric"), contains = "m1")

setMethod("Ops", c("m1", "m1"), function(e1, e2) {
    as(e1, "matrix") <- callNextMethod()
    e1@count <- max(e1@count, e2@count)+1
    e1})

mm2 <- new("m2", matrix(1:12, 3, 4), sum = sum(1:12))

stopifnot(identical(mm2[,2], 4:6))

setClass("m3", slots = c(rowtags = "character"),contains = "m2")

setMethod("[", signature(x="m3", i = "character", j = "missing",
                         drop = "missing"),
          function(x, i,j, ..., drop) {
              xx <- callNextMethod(x, match(i, x@rowtags),)
              x@.Data <- xx
              x@rowtags <- x@rowtags[match(i, x@rowtags)]
              x})

tm <- matrix(1:12, 4, 3)

mm3 <- new("m3", tm, rowtags = letters[1:4])

mmm <- mm3[c("b", "d")]

stopifnot(identical(mmm,
      new("m3", tm[c(2, 4),], rowtags = c("b", "d"))))

removeClass("m3")
removeClass("m2")
removeClass("m1")

removeMethods(all=FALSE,"[")
removeMethods(all=FALSE,"Ops")



