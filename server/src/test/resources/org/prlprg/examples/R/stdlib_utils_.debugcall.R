#? stdlib
`.debugcall` <- function (call, op) 
{
    funsym <- deparse(call[[1L]])
    func <- get(funsym, parent.frame(2L), mode = "function")
    have.methods <- isNamespaceLoaded("methods")
    func <- if (is.primitive(func)) {
        if (have.methods) 
            methods::getGeneric(func)
    }
    else func
    if (is.null(func)) {
        stop("Cannot debug primitive functions unless they are implicit generics (requires loading the methods package)")
    }
    mcall <- match.call(func, call)
    env <- parent.frame(2L)
    isS4Generic <- have.methods && methods::isGeneric(funsym, 
        env)
    if (!isS4Generic) {
        s3ret <- isS3stdGeneric(func)
        if (s3ret) {
            genname <- names(s3ret)
            arg <- eval(mcall[[2L]], envir = env)
            func <- getS3method(genname, class(arg))
        }
        sig <- NULL
    }
    else {
        sig <- .signatureFromCall(func, mcall, env)
    }
    op(func, signature = sig)
}
