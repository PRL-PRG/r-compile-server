#? stdlib
`.matchSubsPattern` <- function (what, matchto, excludeVirtual) 
{
    def <- getClass(what)
    if (excludeVirtual && def@virtual) 
        return("")
    matches <- match(names(def@contains), matchto, 0L)
    matches <- matches[matches > 0L]
    paste(matches, collapse = ".")
}
