#? stdlib
`warnErrList` <- function (x, warn = TRUE, errValue = NULL) 
{
    errs <- vapply(x, inherits, NA, what = "error")
    if (any(errs)) {
        v.err <- x[errs]
        e.call <- deparse1(conditionCall(v.err[[1]]), collapse = "\n")
        tt <- table(vapply(v.err, conditionMessage, ""))
        msg <- if (length(tt) == 1L) 
            sprintf(ngettext(tt[[1L]], "%d error caught in %s: %s", 
                "%d times caught the same error in %s: %s"), 
                tt[[1L]], e.call, names(tt)[[1L]])
        else paste(gettextf("%d errors caught in %s.  The error messages and their frequencies are", 
            sum(tt), e.call), paste(capture.output(sort(tt)), 
            collapse = "\n"), sep = "\n")
        if (warn) 
            warning(msg, call. = FALSE, domain = NA)
        x[errs] <- list(errValue)
        attr(x, "warningMsg") <- msg
    }
    x
}

# Examples
## Regression for each Chick:
ChWtgrps <- split(ChickWeight, ChickWeight[,"Chick"])
sapply(ChWtgrps, nrow)# typically 12 obs.
nlis1 <- lapply(ChWtgrps, function(DAT) tryCatch(error = identity,
                      lm(weight ~ (Time + I(Time^2)) * Diet, data = DAT)))
nl1 <- warnErrList(nlis1) #-> warning :
## 50 times the same error (as Diet has only one level in each group)
stopifnot(sapply(nl1, is.null)) ## all errors --> all replaced by NULL
nlis2 <- lapply(ChWtgrps, function(DAT) tryCatch(error = identity,
                      lm(weight ~ Time + I(Time^2), data = DAT)))
nl2 <- warnErrList(nlis2)
stopifnot(identical(nl2, nlis2)) # because there was *no* error at all
nlis3 <- lapply(ChWtgrps, function(DAT) tryCatch(error = identity,
                      lm(weight ~ poly(Time, 3), data = DAT)))
nl3 <- warnErrList(nlis3) # 1 error caught:
stopifnot(inherits(nlis3[[1]], "error")
        , identical(nl3[-1], nlis3[-1])
        , is.null(nl3[[1]])
)

## With different error messages
if(requireNamespace("nlme")) { # almost always, as it is recommended
 data(Soybean, package="nlme")
 attr(Soybean, "formula") #-> weight ~ Time | Plot  => split by "Plot":
 L <- lapply(split(Soybean, Soybean[,"Plot"]),
             function(DD) tryCatch(error = identity,
                 nls(weight ~ SSlogis(Time, Asym, xmid, scal), data = DD)))
 Lw <- warnErrList(L)
} # if <nlme>

