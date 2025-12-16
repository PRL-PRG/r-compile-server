#? stdlib
`format.news_db` <- function (x, ...) 
{
    if (tools:::.news_db_has_no_bad_entries(x)) {
        vchunks <- split(x, x$Version)
        vstrings <- names(vchunks)
        ind <- vstrings != "R-devel"
        pos <- c(which(!ind), which(ind)[order(as.numeric_version(sub(" *patched", 
            ".1", vstrings[ind])), decreasing = TRUE)])
        vchunks <- vchunks[pos]
        if (length(vchunks)) {
            dates <- vapply(vchunks, function(v) v$Date[1L], 
                "")
            vstrings <- names(vchunks)
            ind <- vstrings != "R-devel"
            vstrings[ind] <- sprintf("version %s", vstrings[ind])
            vheaders <- format(sprintf("Changes in %s%s", vstrings, 
                ifelse(is.na(dates), "", sprintf(" (%s)", dates))), 
                justify = "centre", width = 72L)
        }
        else vheaders <- character()
        format_items <- function(x) paste0("    o   ", gsub("\n", 
            "\n\t", x$Text, fixed = TRUE))
        format_vchunk <- function(vchunk) {
            if (all(!is.na(category <- vchunk$Category) & nzchar(category))) {
                cchunks <- split(vchunk, factor(category, levels = unique(category)))
                cheaders <- names(cchunks)
                Map(c, cheaders, lapply(cchunks, format_items), 
                  USE.NAMES = FALSE)
            }
            else {
                format_items(vchunk)
            }
        }
        Map(c, vheaders, lapply(vchunks, format_vchunk), USE.NAMES = FALSE)
    }
    else {
        apply(as.matrix(x), 1L, function(e) paste(formatDL(e[!is.na(e)], 
            style = "list"), collapse = "\n"))
    }
}
