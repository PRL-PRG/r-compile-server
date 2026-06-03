#? stdlib
`format.checkVignettes` <- function (x, ...) 
{
    myfmt <- function(y, title) {
        if (length(y)) {
            paste(c(paste0("\n", title, "\n"), unlist(Map(c, 
                paste0("File ", names(y), ":"), lapply(y, as.character)), 
                use.names = FALSE)), collapse = "\n")
        }
    }
    c(character(), myfmt(x$tangle, "*** Tangle Errors ***"), 
        myfmt(x$source, "*** Source Errors ***"), myfmt(x$weave, 
            "*** Weave Errors ***"), myfmt(x$latex, "*** PDFLaTeX Errors ***"))
}
