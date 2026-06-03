#? stdlib
`getRfuns` <- function () 
{
    pat <- sprintf("(\\.dylib|%s)$", .Platform$dynlib.ext)
    ofiles <- c(file.path(R.home("bin"), "exec", "R"), dir(R.home("lib"), 
        pattern = pat, full.names = TRUE), dir(R.home("modules"), 
        pattern = pat, full.names = TRUE))
    data <- do.call(rbind, lapply(ofiles, readFileSyms))
    fdata <- data[data$type == "T", ]
    cleanRfuns(fdata$name)
}
