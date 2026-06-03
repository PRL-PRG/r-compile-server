#? stdlib
`.source_assignments_in_code_dir` <- function (dir, envir, meta = character()) 
{
    con <- tempfile("Rcode")
    on.exit(unlink(con))
    if (!file.create(con)) 
        stop("unable to create ", con)
    txt <- meta[c(paste0("Collate.", .OStype()), "Collate")]
    ind <- which(!is.na(txt))
    files <- if (any(ind)) 
        Filter(function(x) file_test("-f", x), file.path(dir, 
            .read_collate_field(txt[ind[1L]])))
    else list_files_with_type(dir, "code")
    if (!all(.file_append_ensuring_LFs(con, files))) 
        stop("unable to write code files")
    if (!is.na(package <- meta["Package"])) 
        envir$.packageName <- package
    tryCatch(.source_assignments(con, envir, enc = meta["Encoding"]), 
        error = function(e) stop("cannot source package code:\n", 
            conditionMessage(e), call. = FALSE))
}
