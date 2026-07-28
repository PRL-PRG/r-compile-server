#? stdlib
`hasArg` <- function (name) 
{
    aname <- as.character(substitute(name))
    fnames <- names(formals(sys.function(sys.parent())))
    if (is.na(match(aname, fnames))) {
        if (is.na(match("...", fnames))) 
            FALSE
        else {
            dotsCall <- eval(quote(substitute(list(...))), sys.parent())
            !is.na(match(aname, names(dotsCall)))
        }
    }
    else eval(substitute(!missing(name)), sys.frame(sys.parent()))
}

# Examples
ftest <- function(x1, ...) c(hasArg(x1), hasArg("y2"))

ftest(1) ## c(TRUE, FALSE)
ftest(1, 2)  ## c(TRUE, FALSE)
ftest(y2 = 2)   ## c(FALSE, TRUE)
ftest(y = 2)    ## c(FALSE, FALSE) (no partial matching)
ftest(y2 = 2, x = 1)  ## c(TRUE, TRUE) partial match x1

