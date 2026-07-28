#? stdlib
`.doSubNextCall` <- function (call, method) 
{
    idrop <- match("drop", names(call))
    hasDrop <- !is.na(idrop)
    if (hasDrop) {
        drop <- call$drop
        call <- call[-idrop]
    }
    fnames <- c("", formalArgs(method))
    i <- match("...", fnames)
    if (is.na(i) || i > length(call)) 
        length(fnames) <- length(call)
    else {
        i <- i - 1
        length(fnames) <- i
        cnames <- if (is.null(names(call))) 
            rep("", length(call) - i)
        else utils::tail(names(call), -i)
        fnames <- c(fnames, cnames)
    }
    names(call) <- fnames
    if (hasDrop) 
        call$drop <- drop
    as.call(call)
}
