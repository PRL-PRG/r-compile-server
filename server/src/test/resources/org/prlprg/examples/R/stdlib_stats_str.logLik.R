#? stdlib
`str.logLik` <- function (object, digits = max(2L, getOption("digits") - 3L), 
    vec.len = getOption("str")$vec.len, ...) 
{
    cl <- oldClass(object)
    len <- length(co <- c(object))
    cutl <- len > vec.len
    cat("Class", if (length(cl) > 1L) 
        "es", " '", paste(cl, collapse = "', '"), "' : ", paste(format(co[seq_len(min(len, 
        vec.len))], digits = digits), collapse = ", "), if (cutl) 
        ", ...", " (df=", format(attr(object, "df")), ")\n", 
        sep = "")
}
