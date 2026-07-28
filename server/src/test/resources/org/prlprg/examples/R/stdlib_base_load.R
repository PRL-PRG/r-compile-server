#? stdlib
`load` <- function (file, envir = parent.frame(), verbose = FALSE) 
{
    if (is.character(file)) {
        con <- gzfile(file)
        on.exit(close(con))
        magic <- readChar(con, 5L, useBytes = TRUE)
        if (!length(magic)) 
            stop("empty (zero-byte) input file")
        if (!grepl("RD[ABX][2-9]\n", magic)) {
            if (grepl("RD[ABX][2-9]\r", magic)) 
                stop("input has been corrupted, with LF replaced by CR")
            warning(sprintf("file %s has magic number '%s'\n", 
                sQuote(basename(file)), gsub("[\n\r]*", "", magic)), 
                "  ", "Use of save versions prior to 2 is deprecated", 
                domain = NA, call. = FALSE)
            return(.Internal(load(file, envir)))
        }
    }
    else if (inherits(file, "connection")) {
        con <- if (inherits(file, "gzfile") || inherits(file, 
            "gzcon")) 
            file
        else gzcon(file)
    }
    else stop("bad 'file' argument")
    if (verbose) 
        cat("Loading objects:\n")
    .Internal(loadFromConn2(con, envir, verbose))
}

# Examples
oldwd <- setwd(tempdir())

## save all data
xx <- pi # to ensure there is some data
save(list = ls(all.names = TRUE), file= "all.rda")
rm(xx)

## restore the saved values to the current environment
local({
   load("all.rda")
   ls()
})

xx <- exp(1:3)
## restore the saved values to the user's workspace
load("all.rda") ## which is here *equivalent* to
## load("all.rda", .GlobalEnv)
## This however annihilates all objects in .GlobalEnv with the same names !
xx # no longer exp(1:3)
rm(xx)
attach("all.rda") # safer and will warn about masked objects w/ same name in .GlobalEnv
ls(pos = 2)
##  also typically need to cleanup the search path:
detach("file:all.rda")

## clean up (the example):
unlink("all.rda")
setwd(oldwd)


