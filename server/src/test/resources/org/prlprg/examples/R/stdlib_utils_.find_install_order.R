#? stdlib
`.find_install_order` <- function (pkgs, dependencyList) 
{
    DL <- dependencyList[pkgs]
    DL <- lapply(DL, function(x) x[x %in% pkgs])
    lens <- lengths(DL)
    if (all(lens > 0L)) {
        warning("every package depends on at least one other")
        return(pkgs)
    }
    done <- names(DL[lens == 0L])
    DL <- DL[lens > 0L]
    while (length(DL)) {
        OK <- vapply(DL, function(x) all(x %in% done), NA)
        if (!any(OK)) {
            warning(gettextf("packages %s are mutually dependent", 
                paste(sQuote(names(DL)), collapse = ", ")), domain = NA)
            return(c(done, names(DL)))
        }
        done <- c(done, names(DL[OK]))
        DL <- DL[!OK]
    }
    done
}
