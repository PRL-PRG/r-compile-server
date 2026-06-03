#? stdlib
`$.package_version` <- function (x, name) 
{
    name <- pmatch(name, c("major", "minor", "patchlevel"))
    x <- unclass(x)
    switch(name, major = vapply(x, `[`, 0L, 1L), minor = vapply(x, 
        `[`, 0L, 2L), patchlevel = vapply(x, `[`, 0L, 3L))
}
