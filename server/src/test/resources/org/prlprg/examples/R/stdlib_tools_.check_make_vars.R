#? stdlib
`.check_make_vars` <- function (dir, makevars = c("Makevars.in", "Makevars")) 
{
    bad_flags <- list()
    class(bad_flags) <- "check_make_vars"
    paths <- file.path(dir, makevars)
    paths <- paths[file_test("-f", paths)]
    if (!length(paths)) 
        return(bad_flags)
    bad_flags$paths <- file.path("src", basename(paths))
    mfile <- paths[1L]
    make <- Sys.getenv("MAKE")
    if (make == "") 
        make <- "make"
    command <- sprintf("%s -f %s -f %s -f %s makevars_test", 
        make, shQuote(file.path(R.home("share"), "make", "check_vars_ini.mk")), 
        shQuote(mfile), shQuote(file.path(R.home("share"), "make", 
            "check_vars_out.mk")))
    lines <- suppressWarnings(tryCatch(system(command, intern = TRUE, 
        ignore.stderr = TRUE), error = identity))
    if (!length(lines) || inherits(lines, "error")) 
        return(bad_flags)
    prefixes <- c("CPP", "C", "CXX", "CXX98", "CXX11", "CXX14", 
        "CXX17", "CXX20", "CXX23", "F", "FC", "OBJC", "OBJCXX")
    uflags_re <- sprintf("^(%s)FLAGS: *(.*)$", paste(prefixes, 
        collapse = "|"))
    pos <- grep(uflags_re, lines)
    ind <- (sub(uflags_re, "\\2", lines[pos]) != "-o /dev/null")
    if (any(ind)) 
        bad_flags$uflags <- lines[pos[ind]]
    pflags_re <- sprintf("^PKG_(%s)FLAGS: ", paste(prefixes, 
        collapse = "|"))
    lines <- lines[grepl(pflags_re, lines)]
    names <- sub(":.*", "", lines)
    lines <- sub(pflags_re, "", lines)
    flags <- strsplit(lines, "[[:space:]]+")
    bad_flags_regexp <- sprintf("^-(%s)$", paste(c("O.*", "W", 
        "w", "W[^l].*", "ansi", "pedantic", "traditional", "f.*", 
        "m.*", "std.*", "isystem", "x", "pipe", "cpp", "g", "q"), 
        collapse = "|"))
    for (i in seq_along(lines)) {
        bad <- grep(bad_flags_regexp, flags[[i]], value = TRUE)
        if (names[i] %in% c("PKG_FFLAGS", "PKG_FCFLAGS")) 
            bad <- grep("^-std=f", bad, invert = TRUE, value = TRUE)
        if (length(bad)) 
            bad_flags$pflags <- c(bad_flags$pflags, structure(list(bad), 
                names = names[i]))
    }
    for (f in paths) {
        lines <- readLines(f, warn = FALSE)
        pflags_re2 <- sprintf(".*[.o]: +PKG_(%s)FLAGS *=", paste(prefixes, 
            collapse = "|"))
        lines <- grep(pflags_re2, lines, value = TRUE)
        lines <- sub(pflags_re2, "", lines)
        flags <- strsplit(lines, "[[:space:]]+")
        bad <- character()
        for (i in seq_along(lines)) bad <- c(bad, grep(bad_flags_regexp, 
            flags[[i]], value = TRUE))
        if (length(bad)) 
            bad_flags$p2flags <- c(bad_flags$p2flags, structure(list(bad), 
                names = file.path("src", basename(f))))
    }
    bad_flags
}
