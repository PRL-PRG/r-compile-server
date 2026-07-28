#? stdlib
`format.checkTnF` <- function (x, ...) 
{
    .fmt <- function(fname) {
        xfname <- x[[fname]]
        c(gettextf("File '%s':", fname), unlist(lapply(seq_along(xfname), 
            function(i) {
                strwrap(gettextf("found T/F in %s", paste(deparse(xfname[[i]]), 
                  collapse = "")), exdent = 4L)
            })), "")
    }
    as.character(unlist(lapply(names(x), .fmt)))
}
