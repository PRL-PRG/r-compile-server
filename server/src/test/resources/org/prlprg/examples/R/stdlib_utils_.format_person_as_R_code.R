#? stdlib
`.format_person_as_R_code` <- function (x) 
{
    s <- lapply(unclass(x), function(e) {
        e <- e[!vapply(e, is.null, NA)]
        cargs <- sprintf("%s = %s", names(e), sapply(e, deparse1))
        .format_call_RR("person", cargs)
    })
    if (length(s) > 1L) 
        .format_call_RR("c", s)
    else unlist(s, use.names = FALSE)
}
