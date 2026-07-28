#? stdlib
`check_for_XQuartz` <- function (DSO) 
{
    if (file.exists(DSO)) {
        loads <- macDynLoads(DSO)
        if (length(loads)) {
            ind <- grep("^/.*libX11[.][0-9]+[.]dylib", loads)
            if (length(ind)) {
                this <- loads[ind]
                if (!file.exists(this)) 
                  stop("X11 library is missing: install XQuartz from www.xquartz.org", 
                    domain = NA)
            }
        }
    }
}
