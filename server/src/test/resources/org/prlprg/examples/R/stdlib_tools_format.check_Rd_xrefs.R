#? stdlib
`format.check_Rd_xrefs` <- function (x, ...) 
{
    xb <- x$bad
    xs <- x$suspect
    if (length(xb) || length(xs)) {
        .fmtb <- function(i) {
            c(gettextf("Missing link or links in Rd file '%s':", 
                names(xb)[i]), .pretty_format(unique(xb[[i]])), 
                "")
        }
        .fmts <- function(i) {
            c(gettextf("Non-file package-anchored link(s) in Rd file '%s':", 
                names(xs)[i]), .pretty_format(unique(xs[[i]])), 
                "")
        }
        c(unlist(lapply(seq_along(xb), .fmtb)), unlist(lapply(seq_along(xs), 
            .fmts)), strwrap(gettextf("See section 'Cross-references' in the 'Writing R Extensions' manual.")))
    }
    else {
        character()
    }
}
