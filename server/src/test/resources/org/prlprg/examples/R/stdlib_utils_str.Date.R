#? stdlib
`str.Date` <- function (object, ...) 
{
    cl <- oldClass(object)
    n <- length(object)
    if (n == 0L) 
        return(str.default(object))
    if (n > 1000L) 
        object <- object[seq_len(1000L)]
    give.length <- TRUE
    if (length(larg <- list(...))) {
        nl <- names(larg)
        which.head <- which(nl == "give.head")
        if (any(Bgl <- nl == "give.length")) 
            give.length <- larg[[which(Bgl)]]
        else if (length(which.head)) 
            give.length <- larg[[which.head]]
        if (length(which.head)) 
            larg <- larg[-which.head]
        if (is.numeric(larg[["nest.lev"]]) && is.numeric(larg[["vec.len"]])) 
            larg[["vec.len"]] <- min(larg[["vec.len"]], (larg[["width"]] - 
                nchar(larg[["indent.str"]]) - 31)%/%19)
    }
    le.str <- if (give.length) 
        paste0("[1:", as.character(n), "]")
    cat(" ", cl[1L], le.str, ", format: ", sep = "")
    str.f.obj <- function(...) str(format(object), ...)
    do.call(str.f.obj, c(list(give.head = FALSE), larg))
}
