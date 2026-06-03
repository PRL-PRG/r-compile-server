#? stdlib
`fnLineNum` <- function (f, srcfile, line, nameonly = TRUE) 
{
    stopifnot(length(line) == 1)
    targetfilename <- .normalizePath(srcfile$filename)
    fnsrc <- attr(attr(f, "srcref") %||% body(f), "srcfile")
    if (is.null(fnsrc)) 
        return(NULL)
    if (missing(srcfile)) 
        srcfile <- fnsrc
    isBrace <- function(expr) is.symbol(expr) && expr == quote(`{`)
    lineNumInExpr <- function(expr, haveSrcrefs = FALSE) {
        if (typeof(expr) == "language") {
            srcrefs <- attr(expr, "srcref")
            for (i in seq_along(expr)) {
                srcref <- srcrefs[[i]]
                if (!is.null(srcref) && (srcref[1] > line || 
                  line > srcref[3])) 
                  next
                finer <- lineNumInExpr(expr[[i]], haveSrcrefs || 
                  !is.null(srcrefs))
                if (!is.null(finer)) {
                  return(c(i, finer))
                }
                if (!(is.null(srcref) || (haveSrcrefs && isBrace(expr[[i]])))) 
                  return(i)
            }
        }
        NULL
    }
    perfectMatch <- identical(.normalizePath(fnsrc$filename, 
        fnsrc$wd), targetfilename)
    if (perfectMatch || (nameonly && !is.null(fnsrc$filename) && 
        basename(fnsrc$filename) == basename(targetfilename))) {
        timediff <- if (!is.na(srcfile$timestamp) && !is.null(fnsrc$timestamp) && 
            fnsrc$timestamp != srcfile$timestamp) 
            fnsrc$timestamp - srcfile$timestamp
        else 0
        if (!is.null(at <- lineNumInExpr(body(f)))) 
            list(at = at, filename = .normalizePath(fnsrc$filename, 
                fnsrc$wd), line = line, timediff = timediff)
    }
}
