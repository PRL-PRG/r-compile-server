#? stdlib
`format.news_db_from_md` <- function (x, ...) 
{
    do_vchunk <- function(vchunk) {
        z <- unlist(Map(c, vchunk$Category, vchunk$Text), use.names = FALSE)
        z[nzchar(z)]
    }
    vchunks <- split(x, x$Version)
    vchunks <- vchunks[order(numeric_version(names(vchunks), 
        strict = FALSE), decreasing = TRUE)]
    if (!length(vchunks)) 
        return(character())
    dates <- vapply(vchunks, function(v) v$Date[1L], "")
    vheaders <- format(sprintf("Changes in version %s%s", names(vchunks), 
        ifelse(is.na(dates), "", sprintf(" (%s)", dates))), justify = "centre", 
        width = 72L)
    Map(c, vheaders, lapply(vchunks, do_vchunk), USE.NAMES = FALSE)
}
