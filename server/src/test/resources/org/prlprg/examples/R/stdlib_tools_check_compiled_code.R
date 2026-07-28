#? stdlib
`check_compiled_code` <- function (dir) 
{
    r_arch <- .Platform$r_arch
    useST <- config_val_to_logical(Sys.getenv("_R_SHLIB_BUILD_OBJECTS_SYMBOL_TABLES_", 
        "FALSE"))
    useSR <- config_val_to_logical(Sys.getenv("_R_CHECK_NATIVE_ROUTINE_REGISTRATION_", 
        "FALSE"))
    compare <- function(x) {
        symbols <- Filter(length, lapply(tables, function(tab) {
            nm <- tab[, "name"]
            intersect(x[, "osname"], nm)
        }))
        so <- attr(x, "file")
        osnames_in_objects <- unique(as.character(unlist(symbols)))
        x <- x[!is.na(match(x[, "osname"], osnames_in_objects)), 
            , drop = FALSE]
        attr(x, "file") <- .file_path_relative_to_dir(so, dir, 
            TRUE)
        attr(x, "objects") <- split(rep.int(names(symbols), lengths(symbols)), 
            unlist(symbols))
        class(x) <- "check_so_symbols"
        x
    }
    so_files <- if (nzchar(r_arch)) 
        Sys.glob(file.path(dir, "libs", r_arch, sprintf("*%s", 
            .Platform$dynlib.ext)))
    else Sys.glob(file.path(dir, "libs", sprintf("*%s", .Platform$dynlib.ext)))
    if (!length(so_files)) 
        return(invisible(NULL))
    bad <- Filter(length, lapply(so_files, check_so_symbols))
    objects_symbol_tables_file <- if (nzchar(r_arch)) 
        file.path(dir, "libs", r_arch, "symbols.rds")
    else file.path(dir, "libs", "symbols.rds")
    if (file_test("-f", objects_symbol_tables_file)) {
        tables <- readRDS(objects_symbol_tables_file)
        bad <- Filter(length, lapply(bad, compare))
    }
    else if (useST) 
        cat("Note: information on .o files is not available\n")
    nAPIs <- lapply(lapply(so_files, check_so_symbols), function(x) if (length(z <- attr(x, 
        "nonAPI"))) 
        structure(z, file = .file_path_relative_to_dir(attr(x, 
            "file"), dir, TRUE), class = "check_nonAPI_calls"))
    bad <- c(bad, Filter(length, nAPIs))
    if (useSR) {
        nRS <- lapply(lapply(so_files, check_so_symbols), function(x) if (length(z <- attr(x, 
            "RegSym"))) 
            structure(z, file = .file_path_relative_to_dir(attr(x, 
                "file"), dir, TRUE), class = "check_RegSym_calls"))
        bad <- c(bad, Filter(length, nRS))
    }
    class(bad) <- "check_compiled_code"
    bad
}
