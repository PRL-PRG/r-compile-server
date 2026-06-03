#? stdlib
`capabilities` <- function (what = NULL, Xchk = any(nas %in% c("X11", "jpeg", "png", 
    "tiff"))) 
{
    z <- .Internal(capabilities())
    if (!is.null(what)) 
        z <- z[match(what, names(z), 0L)]
    if (.Platform$OS.type == "windows" || (!missing(Xchk) && 
        isFALSE(Xchk))) 
        return(z)
    nas <- names(z[is.na(z)])
    if (Xchk) {
        z[nas] <- tryCatch(.Internal(capabilitiesX11()), error = function(e) FALSE)
    }
    z
}

# Examples
capabilities()

if(!capabilities("ICU"))
   warning("ICU is not available")

## Does not call the internal X11-checking function:
capabilities(Xchk = FALSE)

## See also the examples for 'connections'.

