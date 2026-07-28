#? stdlib
`shtmlify` <- function (s) 
{
    s <- fsub("&", "&amp;", s)
    s <- fsub("<", "&lt;", s)
    s <- fsub(">", "&gt;", s)
    s
}
