#? stdlib
`htmlify` <- function (x) 
{
    x <- fsub("&", "&amp;", x)
    x <- fsub("---", "&mdash;", x)
    x <- fsub("--", "&ndash;", x)
    x <- fsub("``", "&ldquo;", x)
    x <- fsub("''", "&rdquo;", x)
    x <- psub("`([^']+)'", "&lsquo;\\1&rsquo;", x)
    x <- fsub("`", "'", x)
    x <- fsub("<", "&lt;", x)
    x <- fsub(">", "&gt;", x)
    x <- fsub("\"\\{\"", "\"{\"", x)
    x <- fsub("\"", "&quot;", x)
    x
}
