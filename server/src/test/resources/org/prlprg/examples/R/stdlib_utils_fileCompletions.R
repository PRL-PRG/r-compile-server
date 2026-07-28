#? stdlib
`fileCompletions` <- function (token) 
{
    pfilename <- correctFilenameToken()
    pfilename <- tryCatch(eval(str2expression(paste0("\"", token, 
        "\""))), error = identity)
    if (inherits(pfilename, "error")) 
        return(character())
    pfilename.expanded <- path.expand(pfilename)
    comps <- Sys.glob(sprintf("%s*", pfilename.expanded), dirmark = TRUE)
    if (length(comps) == 1 && endsWith(comps, "/")) {
        filesInside <- list.files(comps, all.files = TRUE, full.names = FALSE, 
            no.. = TRUE)
        if (length(filesInside)) 
            comps <- c(comps, file.path(comps, filesInside))
    }
    if (pfilename.expanded != pfilename) 
        comps <- sub(path.expand("~"), "~", comps, fixed = TRUE)
    if (pfilename != token) 
        comps <- substring(comps, nchar(pfilename) - nchar(token) + 
            1L, 1000L)
    comps <- gsub("([\\\\'\"])", "\\\\\\1", comps)
    comps
}
