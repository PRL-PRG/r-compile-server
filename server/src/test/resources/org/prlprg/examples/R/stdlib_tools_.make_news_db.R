#? stdlib
`.make_news_db` <- function (x, bad = NULL, classes = NULL) 
{
    out <- data.frame(x, row.names = NULL, stringsAsFactors = FALSE)
    colnames(out)[1L:4L] <- c("Version", "Date", "Category", 
        "Text")
    if (!is.null(bad)) 
        attr(out, "bad") <- bad
    class(out) <- unique(c(classes, "news_db", "data.frame"))
    out
}
