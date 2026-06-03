#? stdlib
`.memberDend` <- function (x) 
{
    attr(x, "x.member") %||% (attr(x, "members") %||% 1L)
}
