#? stdlib
`[[<-.hashtab` <- function (h, key, ..., value) 
{
    sethash(h, key, value)
    h
}
