#? stdlib
`check_packages_in_dir_results` <- function (dir, logs = NULL, ...) 
{
    if (is.null(logs)) 
        logs <- Sys.glob(file.path(dir, "*.Rcheck", "00check.log"))
    results <- lapply(logs, function(log, ...) {
        lines <- read_check_log(log, ...)
        re <- "^\\* using session charset: "
        pos <- grep(re, lines, perl = TRUE, useBytes = TRUE)
        enc <- if (length(pos)) 
            sub(re, "", lines[pos[1L]], useBytes = TRUE)
        else ""
        lines <- iconv(lines, enc, "UTF-8", sub = "byte")
        if (any(bad <- !validUTF8(lines))) 
            lines[bad] <- iconv(lines[bad], to = "ASCII", sub = "byte")
        pos <- which(startsWith(lines, "* loading checks for arch"))
        pos <- pos[pos < length(lines)]
        pos <- pos[startsWith(lines[pos + 1L], "** checking")]
        if (length(pos)) 
            lines <- lines[-pos]
        pos <- which(startsWith(lines, "* checking examples"))
        pos <- pos[pos < length(lines)]
        pos <- pos[startsWith(lines[pos + 1L], "** running examples for arch")]
        if (length(pos)) 
            lines <- lines[-pos]
        pos <- which(startsWith(lines, "* checking tests"))
        pos <- pos[pos < length(lines)]
        pos <- pos[startsWith(lines[pos + 1L], "** running tests for arch")]
        if (length(pos)) 
            lines <- lines[-pos]
        re <- "^\\*\\*? ((checking|creating|running examples for arch|running tests for arch) .*) \\.\\.\\.( (\\[[^ ]*\\]))?( (NOTE|WARNING|ERROR)|)$"
        m <- regexpr(re, lines, perl = TRUE)
        ind <- (m > 0L)
        status <- if (any(ind)) {
            status <- sub(re, "\\6", lines[ind], perl = TRUE)
            if (any(status == "")) 
                "FAILURE"
            else if (any(status == "ERROR")) 
                "ERROR"
            else if (any(status == "WARNING")) 
                "WARNING"
            else "NOTE"
        }
        else {
            "OK"
        }
        list(status = status, lines = lines[ind])
    }, ...)
    names(results) <- sub("\\.Rcheck$", "", basename(dirname(logs)))
    results
}
