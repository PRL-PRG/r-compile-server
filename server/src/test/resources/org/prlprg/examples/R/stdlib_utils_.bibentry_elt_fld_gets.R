#? stdlib
`.bibentry_elt_fld_gets` <- function (x, j, v, a) 
{
    if (a) {
        attr(x, j) <- if (is.null(v)) 
            NULL
        else paste(v)
    }
    else {
        j <- tolower(j)
        x[[j]] <- if (is.null(v)) 
            NULL
        else if (j %in% c("author", "editor")) 
            as.person(v)
        else paste(v)
    }
    .bibentry_check_bibentry1(x)
    x
}
