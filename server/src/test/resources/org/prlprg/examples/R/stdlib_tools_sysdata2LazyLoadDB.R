#? stdlib
`sysdata2LazyLoadDB` <- function (srcFile, destDir, compress = TRUE) 
{
    e <- new.env(hash = TRUE)
    load(srcFile, e)
    makeLazyLoadDB(e, file.path(destDir, "sysdata"), compress = compress)
}
