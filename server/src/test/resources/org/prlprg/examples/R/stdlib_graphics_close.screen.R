#? stdlib
`close.screen` <- function (n, all.screens = FALSE) 
{
    if (!.SSexists("sp.screens")) 
        return(FALSE)
    if (missing(n) && missing(all.screens)) 
        return(.SSget("sp.valid.screens"))
    valid.screens <- .SSget("sp.valid.screens")
    if (all.screens || all(valid.screens %in% n)) {
        par(.SSget("sp.saved.pars"))
        par(mfrow = c(1, 1), new = FALSE)
        rm(list = .SSname(c("sp.screens", "sp.cur.screen", "sp.saved.pars", 
            "sp.valid.screens")), envir = .SSenv)
        invisible()
    }
    else {
        valid.screens <- valid.screens[-sort(match(n, valid.screens))]
        .SSassign("sp.valid.screens", valid.screens)
        temp <- .SSget("sp.cur.screen")
        if (temp %in% n) {
            poss <- valid.screens[valid.screens > temp]
            temp <- if (length(poss)) 
                min(poss)
            else min(valid.screens)
        }
        screen(temp, new = FALSE)
        valid.screens
    }
}
