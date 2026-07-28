#? stdlib
`callGeneric` <- function (...) 
{
    call <- sys.call(sys.parent(1L))
    .local <- identical(call[[1L]], quote(.local))
    methodCtxInd <- 1L + if (.local) 
        1L
    else 0L
    callerCtxInd <- methodCtxInd + 1L
    methodCall <- sys.call(sys.parent(methodCtxInd))
    if (fromNextMethod(methodCall)) {
        methodCtxInd <- methodCtxInd + 1L
    }
    methodFrame <- parent.frame(methodCtxInd)
    genericName <- getGenericFromCall(methodCall, methodFrame)
    if (is.null(genericName)) {
        stop("callGeneric() must be called from within a method body")
    }
    if (nargs() == 0L) {
        callerFrame <- sys.frame(sys.parent(callerCtxInd))
        methodDef <- sys.function(sys.parent(1L))
        call <- match.call(methodDef, methodCall, expand.dots = FALSE, 
            envir = callerFrame)
        call[-1L] <- lapply(names(call[-1L]), as.name)
    }
    else {
        call <- sys.call()
    }
    call[[1L]] <- as.name(genericName)
    eval(call, parent.frame())
}

# Examples
## the method for group generic function Ops
## for signature( e1="structure", e2="vector")
function (e1, e2)
{
    value <- callGeneric(e1@.Data, e2)
    if (length(value) == length(e1)) {
        e1@.Data <- value
        e1
    }
    else value
}

## For more examples



