#? stdlib
`aspell_package_vignettes` <- function (dir, control = list(), program = NULL, dictionaries = character()) 
{
    dir <- tools::file_path_as_absolute(dir)
    vinfo <- tools::pkgVignettes(dir = dir)
    files <- vinfo$docs
    if (!length(files)) 
        return(aspell(character()))
    meta <- tools:::.get_package_metadata(dir, installed = FALSE)
    if (is.na(encoding <- meta["Encoding"])) 
        encoding <- "unknown"
    defaults <- .aspell_package_defaults(dir, encoding)$vignettes
    if (!is.null(defaults)) {
        if (!is.null(d <- defaults$control)) 
            control <- d
        if (!is.null(d <- defaults$program)) 
            program <- d
        if (!is.null(d <- defaults$dictionaries)) {
            dictionaries <- aspell_find_dictionaries(d, file.path(dir, 
                ".aspell"))
        }
        if (!is.null(d <- defaults$personal)) 
            control <- c(control, sprintf("-p %s", shQuote(file.path(dir, 
                ".aspell", d))))
    }
    program <- aspell_find_program(program)
    fgroups <- split(files, vinfo$engines)
    egroups <- split(vinfo$encodings, vinfo$engines)
    do.call(rbind, Map(function(fgroup, egroup, engine) {
        engine <- tools::vignetteEngine(engine)
        aspell(fgroup, filter = engine$aspell$filter, control = c(engine$aspell$control, 
            aspell_control_package_vignettes[[names(program)]], 
            control), encoding = egroup, program = program, dictionaries = dictionaries)
    }, fgroups, egroups, names(fgroups)))
}
