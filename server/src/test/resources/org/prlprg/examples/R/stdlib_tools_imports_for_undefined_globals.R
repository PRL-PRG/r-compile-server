#? stdlib
`imports_for_undefined_globals` <- function (txt, lst, selective = TRUE) 
{
    if (!missing(txt)) 
        lst <- scan(what = character(), text = txt, quiet = TRUE)
    lst <- sort(unique(lst))
    nms <- lapply(lst, utils::find)
    ind <- lengths(nms) > 0L
    imp <- split(lst[ind], substring(unlist(nms[ind]), 9L))
    if (selective) {
        sprintf("importFrom(%s)", vapply(Map(c, names(imp), imp), 
            function(e) paste0("\"", e, "\"", collapse = ", "), 
            ""))
    }
    else {
        sprintf("import(\"%s\")", names(imp))
    }
}
