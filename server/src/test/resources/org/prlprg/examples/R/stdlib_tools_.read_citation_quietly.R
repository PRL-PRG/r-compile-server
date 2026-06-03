#? stdlib
`.read_citation_quietly` <- function (cfile, meta) 
{
    tryCatch(suppressMessages(suppressWarnings(utils::readCitationFile(cfile, 
        meta))), error = identity)
}
