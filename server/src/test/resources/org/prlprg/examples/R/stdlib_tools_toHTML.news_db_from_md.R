#? stdlib
`toHTML.news_db_from_md` <- function (x, ...) 
{
    do_vchunk <- function(vchunk) {
        cheaders <- vchunk$Category
        ind <- nzchar(cheaders)
        cheaders[ind] <- paste0("<h3>", cheaders[ind], "</h3>")
        z <- unlist(Map(c, cheaders, vchunk$HTML), use.names = FALSE)
        z[nzchar(z)]
    }
    vchunks <- split(x, x$Version)
    vchunks <- vchunks[order(numeric_version(names(vchunks), 
        strict = FALSE), decreasing = TRUE)]
    dates <- vapply(vchunks, function(v) v$Date[1L], "")
    vheaders <- sprintf("<h2>Changes in version %s%s</h2>", names(vchunks), 
        ifelse(is.na(dates), "", sprintf(" (%s)", dates)))
    c(HTMLheader(...), unlist(Map(c, vheaders, lapply(vchunks, 
        do_vchunk))), "</div></body></html>")
}
