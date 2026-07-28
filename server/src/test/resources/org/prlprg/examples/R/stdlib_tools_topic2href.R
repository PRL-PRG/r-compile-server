#? stdlib
`topic2href` <- function (x, destpkg = NULL, hooks = list()) 
{
    if (is.null(destpkg)) 
        sprintf("#%s", topic2id(x))
    else {
        FUN <- hooks$pkg_href
        if (is.null(FUN)) 
            FUN <- function(pkg) sprintf("%s.html", pkg)
        sprintf("%s#%s", FUN(destpkg), topic2id(x))
    }
}
