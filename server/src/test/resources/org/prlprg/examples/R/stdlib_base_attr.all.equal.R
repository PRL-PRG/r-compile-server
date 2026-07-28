#? stdlib
`attr.all.equal` <- function (target, current, ..., check.attributes = TRUE, check.names = TRUE) 
{
    if (!is.logical(check.attributes)) 
        stop(gettextf("'%s' must be logical", "check.attributes"), 
            domain = NA)
    if (!is.logical(check.names)) 
        stop(gettextf("'%s' must be logical", "check.names"), 
            domain = NA)
    msg <- NULL
    if (mode(target) != mode(current)) 
        msg <- paste0("Modes: ", mode(target), ", ", mode(current))
    if (length(target) != length(current)) 
        msg <- c(msg, paste0("Lengths: ", length(target), ", ", 
            length(current)))
    ax <- attributes(target)
    ay <- attributes(current)
    if (check.names) {
        nx <- names(target)
        ny <- names(current)
        if ((lx <- length(nx)) | (ly <- length(ny))) {
            ax$names <- ay$names <- NULL
            if (lx && ly) {
                if (is.character(m <- all.equal.character(nx, 
                  ny, check.attributes = check.attributes))) 
                  msg <- c(msg, paste("Names:", m))
            }
            else if (lx) 
                msg <- c(msg, "names for target but not for current")
            else msg <- c(msg, "names for current but not for target")
        }
    }
    else {
        ax[["names"]] <- NULL
        ay[["names"]] <- NULL
    }
    if (check.attributes && (length(ax) || length(ay))) {
        nx <- names(ax)
        ny <- names(ay)
        if (length(nx)) 
            ax <- ax[order(nx)]
        if (length(ny)) 
            ay <- ay[order(ny)]
        tt <- all.equal(ax, ay, ..., check.attributes = check.attributes)
        if (is.character(tt)) 
            msg <- c(msg, paste("Attributes: <", tt, ">"))
    }
    msg
}
