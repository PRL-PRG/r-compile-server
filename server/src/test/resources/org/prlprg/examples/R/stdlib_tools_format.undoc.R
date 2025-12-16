#? stdlib
`format.undoc` <- function (x, ...) 
{
    .fmt <- function(i) {
        tag <- names(x)[i]
        msg <- switch(tag, `code objects` = gettext("Undocumented code objects:"), 
            `data sets` = gettext("Undocumented data sets:"), 
            `S4 classes` = gettext("Undocumented S4 classes:"), 
            `S4 methods` = gettext("Undocumented S4 methods:"), 
            prim_extra = gettext("Prototyped non-primitives:"), 
            gettextf("Undocumented %s:", tag))
        c(msg, if (tag == "S4 methods") {
            strwrap(x[[i]], indent = 2L, exdent = 4L)
        } else {
            .pretty_format(x[[i]])
        })
    }
    as.character(unlist(lapply(which(lengths(x) > 0L), .fmt)))
}
