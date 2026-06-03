#? stdlib
`aspell_find_program` <- function (program = NULL) 
{
    check <- !is.null(program) || !is.null(names(program))
    if (is.null(program)) 
        program <- getOption("aspell_program")
    if (is.null(program)) 
        program <- c("aspell", "hunspell", "ispell")
    program <- Filter(nzchar, Sys.which(program))[1L]
    if (!is.na(program) && check) {
        out <- c(system(sprintf("%s -v", program), intern = TRUE), 
            "")[1L]
        if (grepl("really Aspell", out)) 
            names(program) <- "aspell"
        else if (grepl("really Hunspell", out)) 
            names(program) <- "hunspell"
        else if (grepl("International Ispell", out)) 
            names(program) <- "ispell"
        else names(program) <- NA_character_
    }
    program
}
