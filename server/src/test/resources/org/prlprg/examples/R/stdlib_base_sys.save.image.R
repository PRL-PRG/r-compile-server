#? stdlib
`sys.save.image` <- function (name) 
{
    closeAllConnections()
    save.image(name)
}
