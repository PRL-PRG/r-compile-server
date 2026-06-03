#? stdlib
`WRE` <- function () 
{
    if (is.null(apidata$wrelines)) {
        if (is.null(apidata$wreloc)) {
            apidata$wreloc <- system.file(package = "tools", 
                "wre.txt")
            if (apidata$wreloc == "") 
                apidata$wreloc <- "https://svn.r-project.org/R/trunk/doc/manual/R-exts.texi"
        }
        apidata$wrelines <- readLines(apidata$wreloc)
    }
    apidata$wrelines
}
