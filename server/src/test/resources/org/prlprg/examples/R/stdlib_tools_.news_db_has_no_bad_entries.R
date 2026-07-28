#? stdlib
`.news_db_has_no_bad_entries` <- function (x) 
{
    (is.null(bad <- attr(x, "bad")) || (length(bad) == NROW(x)) && 
        !any(bad))
}
