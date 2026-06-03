#? stdlib
`getNamespace` <- function (name) 
{
    .Internal(getRegisteredNamespace(name)) %||% loadNamespace(name)
}
