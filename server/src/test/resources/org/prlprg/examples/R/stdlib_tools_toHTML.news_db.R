#? stdlib
`toHTML.news_db` <- function (x, ...) 
{
    htmlify2 <- function(x) {
        x <- psub("<([[:alnum:]._]+)>", "@VAR@\\1@EVAR@", x)
        x <- fsub("&", "&amp;", x)
        x <- fsub("---", "&mdash;", x)
        x <- fsub("``", "&ldquo;", x)
        x <- fsub("''", "&rdquo;", x)
        x <- psub("`([^']+)'", "&lsquo;\\1&rsquo;", x)
        x <- fsub("`", "'", x)
        x <- fsub("<", "&lt;", x)
        x <- fsub(">", "&gt;", x)
        x <- fsub("@VAR@", "<var>", x)
        x <- fsub("@EVAR@", "</var>", x)
        x
    }
    if (!.news_db_has_no_bad_entries(x)) 
        return(character())
    print_items <- function(x) c("<ul>", sprintf("<li>%s</li>", 
        x), "</ul>")
    if (is.null(x$HTML)) 
        x$HTML <- htmlify2(iconv(x$Text, to = "UTF-8"))
    vchunks <- split(x, x$Version)
    vchunks <- vchunks[order(numeric_version(sub(" *patched", 
        ".1", names(vchunks)), strict = FALSE), na.last = FALSE, 
        decreasing = TRUE)]
    dates <- vapply(vchunks, function(v) v$Date[1L], "")
    vheaders <- sprintf("<h2>Changes in version %s%s</h2>", names(vchunks), 
        ifelse(is.na(dates), "", sprintf(" (%s)", dates)))
    c(HTMLheader(...), unlist(lapply(seq_along(vchunks), function(i) {
        vchunk <- vchunks[[i]]
        if (all(!is.na(category <- vchunk$Category) & nzchar(category))) {
            cchunks <- split(vchunk, factor(category, levels = unique(category)))
            c(vheaders[i], Map(function(h, t) c(h, print_items(t$HTML)), 
                sprintf("<h3>%s</h3>", htmlify2(names(cchunks))), 
                cchunks))
        } else {
            c(vheaders[i], print_items(vchunk$HTML))
        }
    })), "</div></body></html>")
}
