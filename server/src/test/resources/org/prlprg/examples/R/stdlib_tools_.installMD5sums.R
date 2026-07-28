#? stdlib
`.installMD5sums` <- function (pkgDir, outDir = pkgDir) 
{
    dot <- getwd()
    if (is.null(dot)) 
        stop("current working directory cannot be ascertained")
    setwd(pkgDir)
    x <- md5sum(dir(".", recursive = TRUE))
    setwd(dot)
    x <- x[names(x) != "MD5"]
    cat(paste(x, names(x), sep = " *"), sep = "\n", file = file.path(outDir, 
        "MD5"))
}
