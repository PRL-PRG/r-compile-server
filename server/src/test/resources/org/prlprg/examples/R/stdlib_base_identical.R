#? stdlib
`identical` <- function (x, y, num.eq = TRUE, single.NA = TRUE, attrib.as.set = TRUE, 
    ignore.bytecode = TRUE, ignore.environment = FALSE, ignore.srcref = TRUE, 
    extptr.as.ref = FALSE) 
.Internal(identical(x, y, num.eq, single.NA, attrib.as.set, ignore.bytecode, 
    ignore.environment, ignore.srcref, extptr.as.ref))

# Examples
identical(1, NULL) ## FALSE -- don't try this with ==
identical(1, 1.)   ## TRUE in R (both are stored as doubles)
identical(1, as.integer(1)) ## FALSE, stored as different types

x <- 1.0; y <- 0.99999999999
## how to test for object equality allowing for numeric fuzz :
(E <- all.equal(x, y))
identical(TRUE, E)
isTRUE(E) # alternative test
## If all.equal thinks the objects are different, it returns a
## character string, and the above expression evaluates to FALSE

## even for unusual R objects :
identical(.GlobalEnv, environment())

### ------- Pickyness Flags : -----------------------------

## the infamous example:
identical(0., -0.) # TRUE, i.e. not differentiated
identical(0., -0., num.eq = FALSE)
## similar:
identical(NaN, -NaN) # TRUE
identical(NaN, -NaN, single.NA = FALSE) # differ on bit-level

### For functions ("closure"s): ----------------------------------------------
###     ~~~~~~~~~
f <- function(x) x
f
g <- compiler::cmpfun(f)
g
identical(f, g)                        # TRUE, as bytecode is ignored by default
identical(f, g, ignore.bytecode=FALSE) # FALSE: bytecode differs

## GLM families contain several functions, some of which share an environment:
p1 <- poisson() ; p2 <- poisson()
identical(p1, p2)                          # FALSE
identical(p1, p2, ignore.environment=TRUE) # TRUE

## in interactive use, the 'keep.source' option is typically true:
op <- options(keep.source = TRUE) # and so, these have differing "srcref" :
f1 <- function() {}
f2 <- function() {}
identical(f1,f2)# ignore.srcref= TRUE : TRUE
identical(f1,f2,  ignore.srcref=FALSE)# FALSE
options(op) # revert to previous state


m0 <- m <- structure(cbind(I = 1, a = 1:3), foo = "bar", class = "matrix")
attributes(m0) <- rev(attributes(m))
names(attributes(m0)) # 'dim' remains first, interestingly...

stopifnot(identical(0, -0),     !identical(0, -0, num.eq = FALSE),
          identical(NaN, -NaN), !identical(NaN, -NaN, single.NA = FALSE),
          identical(m, m0),     !identical(m, m0, attrib.as.set = FALSE) )


