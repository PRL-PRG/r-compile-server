#? stdlib
`.chooseMirror` <- function (m, label, graphics, ind) 
{
    if (is.null(ind) && !interactive()) 
        stop("cannot choose a ", label, " mirror non-interactively")
    if (length(ind)) 
        res <- as.integer(ind)[1L]
    else {
        isHTTPS <- (startsWith(m[, "URL"], "https") & grepl("secure_mirror_from_master", 
            m[, "Comment"], fixed = TRUE))
        mHTTPS <- m[isHTTPS, ]
        mHTTP <- m[!isHTTPS, ]
        httpsLabel <- paste("Secure", label, "mirrors")
        httpLabel <- paste("Other", label, "mirrors")
        m <- mHTTPS
        res <- menu(c(m[, 1L], "(other mirrors)"), graphics, 
            httpsLabel)
        if (res > nrow(m)) {
            m <- mHTTP
            res <- menu(m[, 1L], graphics, httpLabel)
        }
    }
    if (res > 0L) {
        URL <- m[res, "URL"]
        names(URL) <- m[res, "Name"]
        sub("/$", "", URL[1L])
    }
    else character()
}
