#? stdlib
`format.codocData` <- function (x, ...) 
{
    format_args <- function(s) paste(s, collapse = " ")
    .fmt <- function(nm) {
        docObj <- x[[nm]]
        c(gettextf("Data codoc mismatches from Rd file '%s':", 
            nm), gettextf("Variables in data frame '%s'", docObj[["name"]]), 
            strwrap(gettextf("Code: %s", format_args(docObj[["code"]])), 
                indent = 2L, exdent = 8L), strwrap(gettextf("Docs: %s", 
                format_args(docObj[["docs"]])), indent = 2L, 
                exdent = 8L), "")
    }
    as.character(unlist(lapply(names(x), .fmt)))
}
