#? stdlib
`modifyList` <- function (x, val, keep.null = FALSE) 
{
    stopifnot(is.list(x), is.list(val))
    xnames <- names(x)
    vnames <- names(val)
    vnames <- vnames[nzchar(vnames)]
    if (keep.null) {
        for (v in vnames) {
            x[v] <- if (v %in% xnames && is.list(x[[v]]) && is.list(val[[v]])) 
                list(modifyList(x[[v]], val[[v]], keep.null = keep.null))
            else val[v]
        }
    }
    else {
        for (v in vnames) {
            x[[v]] <- if (v %in% xnames && is.list(x[[v]]) && 
                is.list(val[[v]])) 
                modifyList(x[[v]], val[[v]], keep.null = keep.null)
            else val[[v]]
        }
    }
    x
}

# Examples
foo <- list(a = 1, b = list(c = "a", d = FALSE))
bar <- modifyList(foo, list(e = 2, b = list(d = TRUE)))
str(foo)
str(bar)

