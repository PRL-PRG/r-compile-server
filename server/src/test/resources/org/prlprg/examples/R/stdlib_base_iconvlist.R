#? stdlib
`iconvlist` <- function () 
{
    int <- .Internal(iconv(NULL, "", "", "", TRUE, FALSE))
    if (length(int)) 
        return(sort.int(int))
    icfile <- system.file("iconvlist", package = "utils")
    if (!nzchar(icfile)) 
        stop("'iconvlist' is not available on this system")
    ext <- readLines(icfile)
    if (!length(ext)) 
        stop("'iconvlist' is not available on this system")
    cnt <- grep("//$", ext)
    if (length(cnt)/length(ext) > 0.5) {
        ext <- grep("//$", ext, value = TRUE)
        ext <- sub("//$", "", ext)
    }
    else if (any(grepl(",", ext, fixed = TRUE))) {
        ext <- gsub(",[[:space:]]", " ", sub(",$", "", ext))
    }
    sort.int(unlist(strsplit(ext, "[[:space:]]")))
}
