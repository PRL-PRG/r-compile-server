#? stdlib
`.make_dependency_list` <- function (pkgs, available, dependencies = c("Depends", "Imports", 
    "LinkingTo"), recursive = FALSE) 
{
    if (!length(pkgs)) 
        return(NULL)
    if (is.null(available)) 
        stop(gettextf("%s must be supplied", sQuote("available")), 
            domain = NA)
    info <- available[pkgs, dependencies, drop = FALSE]
    x <- vector("list", length(pkgs))
    names(x) <- pkgs
    if (recursive) {
        known <- row.names(available)
        xx <- vector("list", length(known))
        names(xx) <- known
        info2 <- available[, dependencies, drop = FALSE]
        for (i in seq_along(known)) xx[[i]] <- .clean_up_dependencies(info2[i, 
            ])
        for (i in pkgs) {
            p <- xx[[i]]
            p <- p[p %in% known]
            p1 <- p
            repeat {
                extra <- unlist(xx[p1])
                extra <- extra[extra != i]
                extra <- extra[extra %in% known]
                deps <- unique(c(p, extra))
                if (length(deps) <= length(p)) 
                  break
                p1 <- deps[!deps %in% p]
                p <- deps
            }
            x[[i]] <- p
        }
    }
    else {
        for (i in seq_along(pkgs)) x[[i]] <- .clean_up_dependencies(info[i, 
            ])
    }
    x
}
