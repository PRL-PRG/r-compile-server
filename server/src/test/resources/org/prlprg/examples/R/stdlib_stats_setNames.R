#? stdlib
`setNames` <- function (object = nm, nm) 
{
    names(object) <- nm
    object
}

# Examples
setNames( 1:3, c("foo", "bar", "baz") )
# this is just a short form of
tmp <- 1:3
names(tmp) <-  c("foo", "bar", "baz")
tmp

## special case of character vector, using default
setNames(nm = c("First", "2nd"))

